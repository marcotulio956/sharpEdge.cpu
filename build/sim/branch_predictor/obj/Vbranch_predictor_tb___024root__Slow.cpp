// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_predictor_tb.h for the primary calling header

#include "Vbranch_predictor_tb__pch.h"

void Vbranch_predictor_tb___024root___ctor_var_reset(Vbranch_predictor_tb___024root* vlSelf);

Vbranch_predictor_tb___024root::Vbranch_predictor_tb___024root(Vbranch_predictor_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vbranch_predictor_tb___024root___ctor_var_reset(this);
}

void Vbranch_predictor_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbranch_predictor_tb___024root::~Vbranch_predictor_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
