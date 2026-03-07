#!/usr/bin/env bash
# run_tb.sh — compile and run Verilator simulation testbenches
#
# Usage:
#   ./run_tb.sh thread_scheduler        # single module
#   ./run_tb.sh branch_predictor
#   ./run_tb.sh data_memory
#   ./run_tb.sh instruction_memory
#   ./run_tb.sh reorder_buffer
#   ./run_tb.sh common_data_bus
#   ./run_tb.sh all                     # all modules in validation order
#
# Requirements:
#   verilator >= 5.0 (for --timing and --binary support)
#
# Output:  build/sim/<name>/sim  (compiled binary)
#          PASS/FAIL lines printed by each testbench

set -euo pipefail

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TB_DIR="$PROJECT_ROOT/testbenches"
BUILD_DIR="$PROJECT_ROOT/build/sim"

# Validation order from COPILOT_GUIDELINES.md (highest-risk first)
ALL_MODULES=(
    reorder_buffer
    common_data_bus
    thread_scheduler
    branch_predictor
    data_memory
    instruction_memory
)

# ---- colour helpers (degrade gracefully if no tty) ----
if [ -t 1 ]; then
    RED='\033[0;31m'; GREEN='\033[0;32m'; YELLOW='\033[1;33m'
    CYAN='\033[0;36m'; BOLD='\033[1m'; NC='\033[0m'
else
    RED=''; GREEN=''; YELLOW=''; CYAN=''; BOLD=''; NC=''
fi

pass_total=0
fail_total=0

run_one() {
    local name="$1"
    local tb="$TB_DIR/${name}_tb.sv"
    local outdir="$BUILD_DIR/$name"
    local bin="$outdir/sim"

    if [[ ! -f "$tb" ]]; then
        echo -e "${RED}[ERROR]${NC} Testbench not found: $tb"
        return 1
    fi

    mkdir -p "$outdir/obj"

    echo -e "${CYAN}[BUILD]${NC} ${BOLD}${name}_tb${NC}"

    # Verilator compile
    # -Wno-INITIALDLY   : suppress #delay-in-initial warnings (expected in TBs)
    # -Wno-WIDTHTRUNC   : suppress width truncation in loop indices
    # -Wno-WIDTHEXPAND  : suppress zero-extension in assignments
    # -Wno-UNUSEDSIGNAL : DUT 'integer i' left over in instruction_memory
    # -Wno-UNOPTFLAT    : combinational loop in clock_generator (not used but
    #                     might be included transitively)
    if verilator \
            --binary \
            --timing \
            --top-module "${name}_tb" \
            -sv \
            -Wno-INITIALDLY \
            -Wno-WIDTHTRUNC \
            -Wno-WIDTHEXPAND \
            -Wno-UNUSEDSIGNAL \
            -Wno-UNOPTFLAT \
            -Mdir "$outdir/obj" \
            -o "$bin" \
            "$tb" \
            2>&1; then
        echo -e "${GREEN}[OK]${NC}    compile succeeded → $bin"
    else
        echo -e "${RED}[FAIL]${NC}  verilator compile failed for ${name}_tb"
        (( fail_total++ )) || true
        return 1
    fi

    echo -e "${CYAN}[RUN]${NC}   ${BOLD}${name}_tb${NC}"

    # Run from project root so $readmemb can find im_init.txt / dm_init.txt
    local output
    output=$(cd "$PROJECT_ROOT" && "$bin" 2>&1) || true
    echo "$output"

    local p f
    p=$(echo "$output" | grep -c '^PASS' || true)
    f=$(echo "$output" | grep -c '^FAIL\|^BUG_CONFIRMED' || true)
    (( pass_total += p )) || true
    (( fail_total += f )) || true

    if [[ $f -eq 0 ]]; then
        echo -e "${GREEN}[RESULT]${NC} ${name}: ${p} passed, ${f} failed"
    else
        echo -e "${RED}[RESULT]${NC} ${name}: ${p} passed, ${f} FAILED"
    fi
    echo ""
}

# ---- main ----
case "${1:-}" in
    all)
        for m in "${ALL_MODULES[@]}"; do
            run_one "$m" || true
        done
        echo -e "${BOLD}========================================${NC}"
        echo -e "${BOLD}TOTAL: ${GREEN}${pass_total} passed${NC}  ${RED}${fail_total} failed${NC}${BOLD}${NC}"
        echo -e "${BOLD}========================================${NC}"
        ;;
    "")
        echo "Usage: $0 <module_name | all>"
        echo ""
        echo "Modules (validation order):"
        for m in "${ALL_MODULES[@]}"; do
            echo "  $m"
        done
        exit 1
        ;;
    *)
        run_one "$1"
        ;;
esac
