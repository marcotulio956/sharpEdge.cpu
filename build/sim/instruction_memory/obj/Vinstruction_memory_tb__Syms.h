// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINSTRUCTION_MEMORY_TB__SYMS_H_
#define VERILATED_VINSTRUCTION_MEMORY_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vinstruction_memory_tb.h"

// INCLUDE MODULE CLASSES
#include "Vinstruction_memory_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vinstruction_memory_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vinstruction_memory_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vinstruction_memory_tb___024root TOP;

    // CONSTRUCTORS
    Vinstruction_memory_tb__Syms(VerilatedContext* contextp, const char* namep, Vinstruction_memory_tb* modelp);
    ~Vinstruction_memory_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
