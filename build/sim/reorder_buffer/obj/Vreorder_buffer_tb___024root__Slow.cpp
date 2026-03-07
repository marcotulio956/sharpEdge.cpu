// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreorder_buffer_tb.h for the primary calling header

#include "Vreorder_buffer_tb__pch.h"

void Vreorder_buffer_tb___024root___ctor_var_reset(Vreorder_buffer_tb___024root* vlSelf);

Vreorder_buffer_tb___024root::Vreorder_buffer_tb___024root(Vreorder_buffer_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vreorder_buffer_tb___024root___ctor_var_reset(this);
}

void Vreorder_buffer_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vreorder_buffer_tb___024root::~Vreorder_buffer_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
