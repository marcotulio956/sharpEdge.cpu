# Multiplexor Selector Reference
> **sharpEdge_v3** · Control Unit Signal Encoding

---

## Selector Encodings

### `sel_rf_read1_reg` — Register File Read Port 1 Source
| `sel` | Source |
|:---:|---|
| `0` | `regb` |
| `1` | `rega` |

---

### `sel_rf_read2_reg` — Register File Read Port 2 Source
| `sel` | Source |
|:---:|---|
| `0` | `regc` |

---

### `sel_rf_vj` — RS Vj Value Source
| `sel` | Source |
|:---:|---|
| `0` | `rf_read1_out` — value read directly from register file |
| `1` | `rob_read1_out` — forwarded value from ROB |

---

### `sel_rf_vk` — RS Vk Value Source
| `sel` | Source |
|:---:|---|
| `0` | `rf_read2_out` — value read directly from register file |
| `1` | `rob_read2_out` — forwarded value from ROB |
| `2` | `imm6` — 6-bit immediate (sign/zero extended) |
| `3` | `imm6mem` — 6-bit memory offset immediate |
| `4` | `imm9` — 9-bit immediate |
| `5` | `imm12` — 12-bit immediate |
| `6` | `zero` — hardwired zero (`r0`) |

---

### `sel_rob_destination` — ROB Destination Field Source
| `sel` | Source |
|:---:|---|
| `0` | `rega` — destination is a register |
| `1` | `regb` — destination is a register (store source) |
| `2` | `addressAdder(destination + value)` — effective memory address |

---

## Default Signal State

These are the values driven by the control unit in the base/default decode path:

| Signal | Default Value | Meaning |
|---|:---:|---|
| `sel_rf_read1_reg` | `1'b0` | Read `regb` on port 1 |
| `sel_rf_read2_reg` | `1'b0` | Read `regc` on port 2 |
| `sel_rs_vj` | `1'b1` | Vj sourced from ROB forwarding path |
| `sel_rs_vk` | `1'b0` | Vk sourced from register file |
| `sel_rob_destination` | `1'b0` | Destination is `rega` |

### Rename Dependency Checks (default path)
| Signal | Value |
|---|---|
| `sel_rs_qj_req` | `bool_reg_renamed[regb]` — Qj tag valid if `regb` is in-flight |
| `sel_rs_qk_req` | `bool_reg_renamed[regc]` — Qk tag valid if `regc` is in-flight |

---

## Exception Codes

Generated at commit stage by the ROB or a Functional Unit.

| Code | Source | Description |
|:---:|:---:|---|
| `000` | — | No exception |
| `001` | ROB | Branch misprediction — PC restored, speculative instructions flushed |
| `010` | FU | Division by zero — CPU halts |

---

*sharpEdge_v3 · MUX Selector Reference*
