// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory_tb.h for the primary calling header

#include "Vinstruction_memory_tb__pch.h"

void Vinstruction_memory_tb___024root___ctor_var_reset(Vinstruction_memory_tb___024root* vlSelf);

Vinstruction_memory_tb___024root::Vinstruction_memory_tb___024root(Vinstruction_memory_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vinstruction_memory_tb___024root___ctor_var_reset(this);
}

void Vinstruction_memory_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vinstruction_memory_tb___024root::~Vinstruction_memory_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
