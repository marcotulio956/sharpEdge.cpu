# sharpEdge
> **Superscalar Out-of-Order Processor with Speculative Dynamic Scheduling**  
> Custom RISC ISA · IEEE 754 Floating Point · Fine-Grained Multithreading · Tomasulo's Algorithm

---

## Overview

**sharpEdge** is a hardware superscalar processor implemented in Verilog, featuring speculative dynamic scheduling via a modified Tomasulo's algorithm, fine-grained multithreading (2 threads per core), and a custom 16-bit RISC ISA with floating-point support.

This is the third iteration of the sharpEdge CPU series, evolving from a Logisim unicycle (v1) through a 5-stage pipeline (v2) to a fully out-of-order, speculative, multithreaded core.

---

## Architecture Highlights

| Feature | Detail |
|---|---|
| **ISA** | Custom RISC, 16-bit instructions |
| **Data width** | 32-bit registers (integer & FP) |
| **Address space** | 16-bit RAM & ROM |
| **Threads** | 2 per core (fine-grained interleaved) |
| **Scheduling** | Dynamic OoO execution, in-order commit |
| **Floating Point** | IEEE 754 single precision (32-bit) |
| **Architecture** | Harvard (separate instruction & data memory) |
| **Branch Prediction** | 2-bit saturating counter per thread |

---

## Module Hierarchy

```
sharpEdge
├── _CG_                          Clock Generator
├── _IM0_                         Dual-port Instruction Memory (shared by both threads)
├── _CORE0_
│   ├── control_unit
│   │   ├── thread_scheduler      Fine-grained interleaved multithreading
│   │   ├── hazard_unit
│   │   ├── thread0_branch_predictor
│   │   └── thread1_branch_predictor
│   ├── reservation_station_ma    Memory Access (8 slots)
│   ├── reservation_station_falu  Floating-Point ALU (8 slots)
│   ├── reservation_station_au    Integer Arithmetic Unit (8 slots)
│   ├── reservation_station_lu    Integer Logical Unit (8 slots)
│   ├── reorder_buffer            32-slot FIFO, DDR issue & double commit
│   ├── common_data_bus
│   │   └── arbiter               Round-robin + priority, 16 simultaneous requests
│   ├── falu                      IEEE 754: add, mul, div
│   ├── au                        4× integer arithmetic units
│   ├── lu                        4× integer logical units
│   ├── thread0_register_file     16× 32-bit GPRs
│   ├── thread1_register_file     16× 32-bit GPRs
│   ├── thread0_program_counter
│   └── thread1_program_counter
└── _DM_                          Sync dual-write / async dual-read Data Memory
```

---

## Pipeline Stages

### 1 · Superscalar Issue
Two instructions are issued sequentially per cycle — one to each thread — via DDR (Double Data Rate) access to the instruction memory. This interleaved scheme yields zero inter-issue dependencies by design.

### 2 · Speculative Out-of-Order Execution (Tomasulo's Algorithm)
- Up to **8 instructions** can be simultaneously dispatched from their Reservation Stations to their respective Functional Units.
- Hardware-driven dynamic scheduling with out-of-order execution and **in-order commit**.
- Precise exception handling: the Program Counter for every in-flight instruction is preserved inside the ROB.

### 3 · Common Data Bus Writeback
- Results are broadcast via the CDB to all Reservation Stations and the ROB simultaneously.
- The **round-robin + priority arbiter** handles up to 16 concurrent write requests, scanning four 4-slot sections and granting one write per cycle.

### 4 · Superscalar Commit
- Two instructions can commit per cycle when no dependency is detected by the hazard unit.
- **Exception handling**: on an error flag, the CPU halts.
- **Branch misprediction recovery**: the ROB is flushed, the PC is restored, and speculative state is rolled back cleanly.

---

## Source Files

| File | Description |
|---|---|
| `sharpEdge.v` | Top-level module |
| `branch_predictor.v` | FSM-based 2-bit branch predictor |
| `clock_generator.v` | Simulation clock |
| `common_data_bus.v` | CDB with round-robin + priority arbiter |
| `data_memory.v` | Sync dual-write, async dual-read |
| `falu.v` | IEEE 754 32-bit: add, mul, div |
| `instruction_memory.v` | Dual-port, shared by both threads |
| `reorder_buffer.v` | DDR issue, breakpoints, double commit |
| `thread_scheduler.v` | Fine-grained interleaved multithreading |

---

## ISA Reference

### Instruction Formats

| Format | `[15:12]` | `[11:9]` | `[8:6]` | `[5:3]` | `[2:0]` |
|:---:|:---:|:---:|:---:|:---:|:---:|
| **0** | Opcode | Opfunc | Rega | Regb | Regc |
| **1** | Opcode | Opfunc | Rega | imm6[5:3] | imm6[2:0] |
| **2** | Opcode | imm6[5:3] | Rega | Regb | imm6[2:0] |
| **3** | Opcode | imm9[8:6] | Rega | imm9[5:3] | imm9[2:0] |
| **4** | Opcode | imm12[11:9] | imm12[8:6] | imm12[5:3] | imm12[2:0] |

### Instruction Set

| Opcode | Fmt | Mnemonic | Unit | Description |
|:---:|:---:|:---:|:---:|---|
| `0000` | 0 | `al` | Function1 | Arithmetical and Logical |
| `0001` | 0 | `cs` | Function2 | Comparisons and Shifts |
| `0010` | 1 | `ial` | Function1 | Immediate Arithmetical and Logical |
| `0011` | 1 | `ics` | Function2 | Immediate Comparisons and Shifts |
| `0100` | 2 | `sw` | — | Store Word |
| `0101` | 2 | `lw` | — | Load Word |
| `0110` | 3 | `br` | — | Branch Register |
| `0111` | 3 | `bzl` | — | Branch on Zero and Link |
| `1000` | 4 | `j` | — | Jump |
| `1001` | 4 | `li` | — | Load Immediate |
| `1010` | 2 | `swc` | — | Store Word Conditional |
| `1011` | 2 | `llw` | — | Load Linked Word |
| `1100` | 0 | `fpal` | Function3 | Floating-Point Arithmetical and Logical |
| `1101` | — | `halt` | — | Halt |

### Opfunc Encoding

| Opfunc | Function1 (ALU) | Function2 (CMP/Shift) | Function3 (FPU) |
|:---:|:---:|:---:|:---:|
| `000` | `mod` | `eq` | `eq` |
| `010` | `or` | `lesser` | `lesser` |
| `011` | `xor` | `noteq` | `noteq` |
| `100` | `add` | `sar` | `add` |
| `101` | `sub` | `slr` | `sub` |
| `110` | `mul` | `sll` | `mul` |
| `111` | `div` | — | `div` |

### Instruction Semantics

| Instruction | Pseudo-code |
|:---:|---|
| `al`, `cs`, `fpal` | `rf[rega] ← rf[regb] ⊕ rf[regc]` |
| `ial`, `ics` | `rf[rega] ← rf[rega] ⊕ unsigned_imm` |
| `sw` / `lw` | `dm[rf[rega] + signed_imm] ↔ rf[regb]` |
| `swc` | if `rf[15] == rf[rega]+imm`: store & `rf[regb]←0`; else `rf[regb]←1` |
| `llw` | `rf[15] ← rf[rega]+imm`; `rf[regb] ← dm[rf[rega]+imm]` |
| `li` | `rf[14] ← unsigned_imm12` |
| `br` | `pc ← rf[rega]` |
| `bzl` | if `rf[rega] == 0`: `rf[15] ← pc`; `pc ← pc + signed_imm` |
| `j` | `pc ← pc + signed_imm` |

### Reserved Registers

| Register | Purpose |
|:---:|---|
| `r0` (`0000`) | Hard-wired zero |
| `r13` (`1101`) | Standard stack pointer |
| `r14` (`1110`) | Destination for `li` (load immediate); comparison register for `llw`/`swc` |
| `r15` (`1111`) | Receives PC on `bzl` (branch-and-link) |

---

## Specifications

### Core Resources

| Resource | Count |
|---|---|
| ROB slots | 32 |
| Reservation station slots (each) | 8 |
| Reservation stations | 4 (MA, FALU, AU, LU) |
| Integer arithmetic units | 4 |
| Integer logical units | 4 |
| FP arithmetic-logical units | 4 |
| GPRs per thread | 16 × 32-bit |

### Memory

| Memory | Type |
|---|---|
| Instruction Memory | Dual-port ROM, shared by both threads |
| Data Memory | Synchronous dual-write, asynchronous dual-read |

---

## Atomic Operations & Cache Coherence

The ISA includes `llw` (Load Linked Word) and `swc` (Store Word Conditional) to support lock-free synchronization primitives. These instructions expose the underlying reservation mechanism needed to implement spin-locks in concurrent, multi-threaded programs — a prerequisite for safe access to shared memory regions between threads.

---

## Version History

| Version | Description |
|---|---|
| **v1** | Simple unicycle CPU without memory, limited ISA. Built in Logisim. |
| **v2** | 5-stage pipelined CPU with memory and a custom RISC ISA. Built in Verilog. |
| **v3** | *(this repo)* Superscalar OoO core, Tomasulo's algorithm, fine-grained multithreading. |
| **v4** | *(planned)* Dual-core with associative L1 cache (snooping), shared direct-mapped L2, instruction cache, directory coherence protocol, and an interconnection network. |

---

## Future Additions

- [ ] **Instruction buffer & cache** — burst fetch support and reduced instruction memory latency.
- [30%] **Tournament branch predictor** — local + global history tables with a saturation arbiter; fewer mispredictions than the current 2-bit local predictor.
- [ ] **Second core** — enabling full use of the cache coherence protocols developed in companion repositories.
- [X] **Concurrency demo programs** — showcase threads accessing critical sections using `llw`/`swc` spin-locks.

---
