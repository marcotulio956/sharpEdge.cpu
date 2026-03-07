// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon_data_bus_tb.h for the primary calling header

#ifndef VERILATED_VCOMMON_DATA_BUS_TB___024ROOT_H_
#define VERILATED_VCOMMON_DATA_BUS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcommon_data_bus_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcommon_data_bus_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ common_data_bus_tb__DOT__clk;
    CData/*0:0*/ common_data_bus_tb__DOT__rst;
    CData/*7:0*/ common_data_bus_tb__DOT__granted_request_cdb0;
    CData/*0:0*/ common_data_bus_tb__DOT__rob_write_cdb0;
    CData/*0:0*/ common_data_bus_tb__DOT__rob_write_cdb1;
    CData/*4:0*/ common_data_bus_tb__DOT__rob_address_cdb0;
    CData/*4:0*/ common_data_bus_tb__DOT__rob_address_cdb1;
    CData/*2:0*/ common_data_bus_tb__DOT___DUT___DOT__selected0;
    CData/*2:0*/ common_data_bus_tb__DOT___DUT___DOT__selected1;
    CData/*0:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter;
    CData/*7:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies;
    CData/*7:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now;
    CData/*7:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant;
    CData/*0:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted;
    CData/*0:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter;
    CData/*7:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies;
    CData/*7:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now;
    CData/*7:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant;
    CData/*0:0*/ common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ common_data_bus_tb__DOT__write_requests;
    IData/*31:0*/ common_data_bus_tb__DOT__data_out_cdb0;
    IData/*31:0*/ common_data_bus_tb__DOT__data_out_cdb1;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 16> common_data_bus_tb__DOT__data_in;
    VlUnpacked<CData/*4:0*/, 16> common_data_bus_tb__DOT__rob_adrs;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfa875bc8__0;
    VlTriggerScheduler __VtrigSched_hfa875882__0;

    // INTERNAL VARIABLES
    Vcommon_data_bus_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcommon_data_bus_tb___024root(Vcommon_data_bus_tb__Syms* symsp, const char* namep);
    ~Vcommon_data_bus_tb___024root();
    VL_UNCOPYABLE(Vcommon_data_bus_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
