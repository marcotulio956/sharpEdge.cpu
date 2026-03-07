// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon_data_bus_tb.h for the primary calling header

#include "Vcommon_data_bus_tb__pch.h"

void Vcommon_data_bus_tb___024root___ctor_var_reset(Vcommon_data_bus_tb___024root* vlSelf);

Vcommon_data_bus_tb___024root::Vcommon_data_bus_tb___024root(Vcommon_data_bus_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcommon_data_bus_tb___024root___ctor_var_reset(this);
}

void Vcommon_data_bus_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcommon_data_bus_tb___024root::~Vcommon_data_bus_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
