TO EDIT

- data_memory.v        address port: [15:0] → [31:0]
- instruction_memory.v address port: [15:0] → [31:0]  
- thread0_program_counter.v  width: 16-bit → 32-bit
- thread1_program_counter.v  width: 16-bit → 32-bit
- control_unit         add decode for opcodes 1110, 1111
                     sel_rob_destination needs no change (lwx/swx use rega as address, regb as data)
- reservation_station_ma     address path already 32-bit (register sourced) — verify wiring only
- sharpEdge_dut.v       update all address bus widths at instantiation

TO IMPLEMENT DOUBLE CDB WRITEBACK:

common_data_bus.v
  - Split into two independent sub-arbiters:
      arbiter0: inputs from AU0-3, LU0-3  (8 requestors)
      arbiter1: inputs from FALU0-3, MA   (5 requestors)
  - Each sub-arbiter outputs one grant per cycle
  - Two output buses: {CDB0_tag, CDB0_value}, {CDB1_tag, CDB1_value}
  - Round-robin within each sub-arbiter independently

reservation_station_*.v  (all four)
  - Each slot: add second comparator pair for CDB1
  - Qj capture: check CDB0 || CDB1 (priority: either, they can't conflict)
  - Qk capture: check CDB0 || CDB1

reorder_buffer.v
  - Each entry: listen to both CDB0 and CDB1
  - Value written when matching tag appears on either bus
  - Commit logic unchanged — still reads from ROB head

sharpEdge_v3.v
  - CDB instantiation wires doubled
  - CDB0 wired to AU/LU outputs
  - CDB1 wired to FALU/MA outputs


TO EDIT PARAMETRIZATION
- Reduce FALU to 1 or 2 units — biggest area saving, near-zero throughput loss for your workload
- Add a second MA unit — biggest real throughput gain given 2 threads competing for memory
- Plan a dual CDB for v3.5 — unblocks the writeback bottleneck as FU count and issue rate grow

NOT STARTED

- Privilege levels: Machine / Supervisor / User modes
- CSR / system registers: No status registers, no interrupt enable bits, no exception vectors
- Interrupts: No interrupt instruction or mechanismNeeded for timers, I/O, keyboard input, anything async.
- Memory fence: No fence / barrier instructionNeeded for memory-ordering guarantees in multithreaded and I/O contexts. RISC-V has FENCE/fence.i
- Byte/halfword accessOnly word (lw/sw)RISC-V has lb, lh, lbu, lhu, sb, sh. Without these, string operations and byte-level I/O are painfully inefficient.
- PC-relative addressing: j is PC-relative but load/store aren't
- Compare-and-set / AMO: llw/swc covers the basic case
- Shift amounts > imm6: Shifts are in cs/ics with 6-bit immediatesFine for 32-bit, but worth confirming the encoding handles full 0–31 range.
- Software interrupt / syscall: No ecall/syscall equivalentEssential for OS system calls. Without it there's no clean kernel entry point from user mode.
- ART debug outputSmallMemory-mapped register + sw to a known address
- framebuffer + VGA, SPI flash/SD, keyboard, timer
