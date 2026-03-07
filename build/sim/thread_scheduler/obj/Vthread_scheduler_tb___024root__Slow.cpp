// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthread_scheduler_tb.h for the primary calling header

#include "Vthread_scheduler_tb__pch.h"

void Vthread_scheduler_tb___024root___ctor_var_reset(Vthread_scheduler_tb___024root* vlSelf);

Vthread_scheduler_tb___024root::Vthread_scheduler_tb___024root(Vthread_scheduler_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vthread_scheduler_tb___024root___ctor_var_reset(this);
}

void Vthread_scheduler_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vthread_scheduler_tb___024root::~Vthread_scheduler_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
