// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREORDER_BUFFER_TB__SYMS_H_
#define VERILATED_VREORDER_BUFFER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vreorder_buffer_tb.h"

// INCLUDE MODULE CLASSES
#include "Vreorder_buffer_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vreorder_buffer_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vreorder_buffer_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vreorder_buffer_tb___024root   TOP;

    // CONSTRUCTORS
    Vreorder_buffer_tb__Syms(VerilatedContext* contextp, const char* namep, Vreorder_buffer_tb* modelp);
    ~Vreorder_buffer_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
