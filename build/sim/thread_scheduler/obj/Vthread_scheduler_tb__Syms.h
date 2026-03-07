// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTHREAD_SCHEDULER_TB__SYMS_H_
#define VERILATED_VTHREAD_SCHEDULER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vthread_scheduler_tb.h"

// INCLUDE MODULE CLASSES
#include "Vthread_scheduler_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vthread_scheduler_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vthread_scheduler_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vthread_scheduler_tb___024root TOP;

    // CONSTRUCTORS
    Vthread_scheduler_tb__Syms(VerilatedContext* contextp, const char* namep, Vthread_scheduler_tb* modelp);
    ~Vthread_scheduler_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
