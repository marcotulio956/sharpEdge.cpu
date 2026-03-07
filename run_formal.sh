#!/usr/bin/env bash
# run_formal.sh — run SymbiYosys formal verification (OSS CAD Suite)
#
# Usage:
#   ./run_formal.sh thread_scheduler        # prove + cover for one module
#   ./run_formal.sh branch_predictor
#   ./run_formal.sh data_memory
#   ./run_formal.sh reorder_buffer
#   ./run_formal.sh common_data_bus
#   ./run_formal.sh all
#   ./run_formal.sh thread_scheduler prove  # only the 'prove' task
#   ./run_formal.sh thread_scheduler cover  # only the 'cover' task
#
# Requirements:
#   sby (SymbiYosys) from OSS CAD Suite
#   bitwuzla SMT solver (included in OSS CAD Suite)
#
# All properties expected to PASS (bugs fixed):
#   data_memory      read condition fix (!write0 instead of write_data0==0)
#   common_data_bus  BUG-2 fix (write_pendencies now guarded by else branch)

set -euo pipefail

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FORMAL_DIR="$PROJECT_ROOT/formal"

ALL_MODULES=(thread_scheduler branch_predictor data_memory reorder_buffer common_data_bus)

# No known expected failures — all properties should PASS.
declare -A KNOWN_FAIL_REASON

# ---- colour helpers ----
if [ -t 1 ]; then
    RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[1;33m'
    CYAN='\033[0;36m'; BOLD='\033[1m'; NC='\033[0m'
else
    RED=''; GREEN=''; YELLOW=''; CYAN=''; BOLD=''; NC=''
fi

run_one() {
    local name="$1"
    local task="${2:-}"          # optional: "prove" or "cover"
    local sby_file="$FORMAL_DIR/${name}.sby"

    if [[ ! -f "$sby_file" ]]; then
        echo -e "${RED}[ERROR]${NC} .sby file not found: $sby_file"
        return 1
    fi

    echo -e "${CYAN}[FORMAL]${NC} ${BOLD}${name}${NC}${task:+" ($task)"}"

    # Build the sby invocation
    local sby_args=(-f "$sby_file")
    [[ -n "$task" ]] && sby_args+=("$task")

    # Run sby from the project root (so [files] paths resolve correctly)
    local rc=0
    (cd "$PROJECT_ROOT" && sby "${sby_args[@]}") || rc=$?

    if [[ $rc -eq 0 ]]; then
        echo -e "${GREEN}[PASS]${NC}  ${name} — all properties proved / covers reached"
    else
        # Check if this is a known expected failure
        if [[ -n "${KNOWN_FAIL_REASON[$name]+x}" ]]; then
            echo -e "${YELLOW}[XFAIL]${NC} ${name} — expected failure"
            echo -e "        ${YELLOW}Reason:${NC} ${KNOWN_FAIL_REASON[$name]}"
            echo -e "        ${YELLOW}This exposes a real RTL bug. Fix the module to make it pass.${NC}"
        else
            echo -e "${RED}[FAIL]${NC}  ${name} — unexpected failure (rc=$rc)"
        fi
    fi
    echo ""
}

print_bugs_summary() {
    echo -e "${BOLD}Expected bug-exposing failures:${NC}"
    for m in "${!KNOWN_FAIL_REASON[@]}"; do
        echo -e "  ${YELLOW}${m}${NC}: ${KNOWN_FAIL_REASON[$m]}"
    done
    echo ""
}

# ---- main ----
case "${1:-}" in
    all)
        print_bugs_summary
        for m in "${ALL_MODULES[@]}"; do
            run_one "$m" "${2:-}" || true
        done
        ;;
    "")
        echo "Usage: $0 <module | all> [prove|cover]"
        echo ""
        echo "Modules:"
        for m in "${ALL_MODULES[@]}"; do
            local_reason="${KNOWN_FAIL_REASON[$m]+${KNOWN_FAIL_REASON[$m]}}"
            if [[ -n "${KNOWN_FAIL_REASON[$m]+x}" ]]; then
                echo -e "  ${YELLOW}${m}${NC}  (has known expected failure)"
            else
                echo "  $m"
            fi
        done
        echo ""
        echo "Examples:"
        echo "  $0 thread_scheduler"
        echo "  $0 branch_predictor prove"
        echo "  $0 data_memory cover"
        echo "  $0 all"
        exit 1
        ;;
    *)
        run_one "$1" "${2:-}"
        ;;
esac
