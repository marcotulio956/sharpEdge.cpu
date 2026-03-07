// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon_data_bus_tb.h for the primary calling header

#include "Vcommon_data_bus_tb__pch.h"

VlCoroutine Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__0(Vcommon_data_bus_tb___024root* vlSelf);
VlCoroutine Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__1(Vcommon_data_bus_tb___024root* vlSelf);

void Vcommon_data_bus_tb___024root___eval_initial(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_initial\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__0(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.common_data_bus_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                             31);
        vlSelfRef.common_data_bus_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.common_data_bus_tb__DOT__clk)));
    }
    co_return;
}

void Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(Vcommon_data_bus_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hf2642cab_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_h38342782_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hbc79f54d_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_ha386baa6_0;
void Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875882__0(Vcommon_data_bus_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hb631a426_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hbd070dbf_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hdcf970ed_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hdc30f98d_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hf7ff3a6b_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_h3780d087_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_h545a4deb_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_ha4a38edb_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_hc3ce95bc_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_h1708f4f9_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_he29a996a_0;
extern const VlWide<8>/*255:0*/ Vcommon_data_bus_tb__ConstPool__CONST_h5ac5f38e_0;

VlCoroutine Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__1(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ common_data_bus_tb__DOT__pass_count;
    common_data_bus_tb__DOT__pass_count = 0;
    IData/*31:0*/ common_data_bus_tb__DOT__fail_count;
    common_data_bus_tb__DOT__fail_count = 0;
    IData/*31:0*/ common_data_bus_tb__DOT__i;
    common_data_bus_tb__DOT__i = 0;
    CData/*7:0*/ common_data_bus_tb__DOT__served_mask;
    common_data_bus_tb__DOT__served_mask = 0;
    IData/*31:0*/ common_data_bus_tb__DOT__served_count;
    common_data_bus_tb__DOT__served_count = 0;
    IData/*31:0*/ common_data_bus_tb__DOT__timeout;
    common_data_bus_tb__DOT__timeout = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__1__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__1__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__1__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__1__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__1__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__1__name);
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__2__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__2__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__2__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__2__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__2__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__2__name);
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__4__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__4__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__4__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__4__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__4__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__4__name);
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__5__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__5__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__5__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__5__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__5__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__5__name);
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__6__expected;
    __Vtask_common_data_bus_tb__DOT__check5__6__expected = 0;
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__6__actual;
    __Vtask_common_data_bus_tb__DOT__check5__6__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check5__6__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check5__6__name);
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__7__expected;
    __Vtask_common_data_bus_tb__DOT__check32__7__expected = 0;
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__7__actual;
    __Vtask_common_data_bus_tb__DOT__check32__7__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check32__7__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check32__7__name);
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__9__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__9__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__9__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__9__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__9__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__9__name);
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__10__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__10__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__10__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__10__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__10__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__10__name);
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__11__expected;
    __Vtask_common_data_bus_tb__DOT__check5__11__expected = 0;
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__11__actual;
    __Vtask_common_data_bus_tb__DOT__check5__11__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check5__11__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check5__11__name);
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__12__expected;
    __Vtask_common_data_bus_tb__DOT__check32__12__expected = 0;
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__12__actual;
    __Vtask_common_data_bus_tb__DOT__check32__12__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check32__12__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check32__12__name);
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__14__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__14__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__14__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__14__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__14__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__14__name);
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__15__expected;
    __Vtask_common_data_bus_tb__DOT__check_bool__15__expected = 0;
    CData/*0:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__15__actual;
    __Vtask_common_data_bus_tb__DOT__check_bool__15__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check_bool__15__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__15__name);
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__16__expected;
    __Vtask_common_data_bus_tb__DOT__check5__16__expected = 0;
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__16__actual;
    __Vtask_common_data_bus_tb__DOT__check5__16__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check5__16__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check5__16__name);
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__17__expected;
    __Vtask_common_data_bus_tb__DOT__check5__17__expected = 0;
    CData/*4:0*/ __Vtask_common_data_bus_tb__DOT__check5__17__actual;
    __Vtask_common_data_bus_tb__DOT__check5__17__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check5__17__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check5__17__name);
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__18__expected;
    __Vtask_common_data_bus_tb__DOT__check32__18__expected = 0;
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__18__actual;
    __Vtask_common_data_bus_tb__DOT__check32__18__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check32__18__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check32__18__name);
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__19__expected;
    __Vtask_common_data_bus_tb__DOT__check32__19__expected = 0;
    IData/*31:0*/ __Vtask_common_data_bus_tb__DOT__check32__19__actual;
    __Vtask_common_data_bus_tb__DOT__check32__19__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_common_data_bus_tb__DOT__check32__19__name;
    VL_ZERO_W(256, __Vtask_common_data_bus_tb__DOT__check32__19__name);
    // Body
    common_data_bus_tb__DOT__pass_count = 0U;
    common_data_bus_tb__DOT__fail_count = 0U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[0U] = 0xa0000000U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[0U] = 0U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[1U] = 0xa0000001U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[1U] = 1U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[2U] = 0xa0000002U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[2U] = 2U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[3U] = 0xa0000003U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[3U] = 3U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[4U] = 0xa0000004U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[4U] = 4U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[5U] = 0xa0000005U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[5U] = 5U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[6U] = 0xa0000006U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[6U] = 6U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[7U] = 0xa0000007U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[7U] = 7U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[8U] = 0xa0000008U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[8U] = 8U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[9U] = 0xa0000009U;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[9U] = 9U;
    vlSelfRef.common_data_bus_tb__DOT__data_in[10U] = 0xa000000aU;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[10U] = 0x0aU;
    vlSelfRef.common_data_bus_tb__DOT__data_in[11U] = 0xa000000bU;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[11U] = 0x0bU;
    vlSelfRef.common_data_bus_tb__DOT__data_in[12U] = 0xa000000cU;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[12U] = 0x0cU;
    vlSelfRef.common_data_bus_tb__DOT__data_in[13U] = 0xa000000dU;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[13U] = 0x0dU;
    vlSelfRef.common_data_bus_tb__DOT__data_in[14U] = 0xa000000eU;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[14U] = 0x0eU;
    vlSelfRef.common_data_bus_tb__DOT__data_in[15U] = 0xa000000fU;
    vlSelfRef.common_data_bus_tb__DOT__rob_adrs[15U] = 0x0fU;
    common_data_bus_tb__DOT__i = 0x00000010U;
    VL_WRITEF_NX("\n=== TEST 1: Reset ===\n",0);
    vlSelfRef.common_data_bus_tb__DOT__rst = 1U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         114);
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         115);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         115);
    vlSelfRef.common_data_bus_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         137);
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__1__name, Vcommon_data_bus_tb__ConstPool__CONST_hf2642cab_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__1__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0;
    __Vtask_common_data_bus_tb__DOT__check_bool__1__expected = 0U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__1__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__1__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__1__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__1__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__1__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__1__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__1__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__2__name, Vcommon_data_bus_tb__ConstPool__CONST_h38342782_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__2__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb1;
    __Vtask_common_data_bus_tb__DOT__check_bool__2__expected = 0U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__2__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__2__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__2__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__2__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__2__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__2__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__2__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 2: Single request CDB0 \342\200\224 bit 2 ===\n",0);
    vlSelfRef.common_data_bus_tb__DOT__rst = 1U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         114);
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         115);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         115);
    vlSelfRef.common_data_bus_tb__DOT__rst = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         148);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 4U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         150);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         150);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__4__name, Vcommon_data_bus_tb__ConstPool__CONST_hbc79f54d_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__4__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0;
    __Vtask_common_data_bus_tb__DOT__check_bool__4__expected = 1U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__4__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__4__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__4__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__4__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__4__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__4__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__4__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__5__name, Vcommon_data_bus_tb__ConstPool__CONST_ha386baa6_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__5__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb1;
    __Vtask_common_data_bus_tb__DOT__check_bool__5__expected = 0U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__5__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__5__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__5__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__5__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__5__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__5__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__5__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875882__0(vlSelf, 
                                                              "@(negedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875882__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         155);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         155);
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check5__6__name, Vcommon_data_bus_tb__ConstPool__CONST_hb631a426_0);
    __Vtask_common_data_bus_tb__DOT__check5__6__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0;
    __Vtask_common_data_bus_tb__DOT__check5__6__expected = 2U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check5__6__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check5__6__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__6__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__6__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%0# got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__6__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__6__expected),
                     5,__Vtask_common_data_bus_tb__DOT__check5__6__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check32__7__name, Vcommon_data_bus_tb__ConstPool__CONST_hbd070dbf_0);
    __Vtask_common_data_bus_tb__DOT__check32__7__actual 
        = vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0;
    __Vtask_common_data_bus_tb__DOT__check32__7__expected = 0xa0000002U;
    if ((__Vtask_common_data_bus_tb__DOT__check32__7__expected 
         == __Vtask_common_data_bus_tb__DOT__check32__7__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__7__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__7__actual);
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__7__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__7__expected,
                     32,__Vtask_common_data_bus_tb__DOT__check32__7__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 3: Single request CDB1 \342\200\224 bit 9 ===\n",0);
    vlSelfRef.common_data_bus_tb__DOT__rst = 1U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         114);
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         115);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         115);
    vlSelfRef.common_data_bus_tb__DOT__rst = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         167);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0x0200U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         169);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         169);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__9__name, Vcommon_data_bus_tb__ConstPool__CONST_hdcf970ed_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__9__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0;
    __Vtask_common_data_bus_tb__DOT__check_bool__9__expected = 0U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__9__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__9__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__9__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__9__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__9__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__9__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__9__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__10__name, Vcommon_data_bus_tb__ConstPool__CONST_hdc30f98d_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__10__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb1;
    __Vtask_common_data_bus_tb__DOT__check_bool__10__expected = 1U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__10__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__10__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__10__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__10__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__10__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__10__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__10__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875882__0(vlSelf, 
                                                              "@(negedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875882__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         174);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         174);
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check5__11__name, Vcommon_data_bus_tb__ConstPool__CONST_hf7ff3a6b_0);
    __Vtask_common_data_bus_tb__DOT__check5__11__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1;
    __Vtask_common_data_bus_tb__DOT__check5__11__expected = 9U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check5__11__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check5__11__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__11__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__11__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%0# got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__11__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__11__expected),
                     5,__Vtask_common_data_bus_tb__DOT__check5__11__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check32__12__name, Vcommon_data_bus_tb__ConstPool__CONST_h3780d087_0);
    __Vtask_common_data_bus_tb__DOT__check32__12__actual 
        = vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1;
    __Vtask_common_data_bus_tb__DOT__check32__12__expected = 0xa0000009U;
    if ((__Vtask_common_data_bus_tb__DOT__check32__12__expected 
         == __Vtask_common_data_bus_tb__DOT__check32__12__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__12__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__12__actual);
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__12__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__12__expected,
                     32,__Vtask_common_data_bus_tb__DOT__check32__12__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 4: Simultaneous CDB0 + CDB1 grants ===\n",0);
    vlSelfRef.common_data_bus_tb__DOT__rst = 1U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         114);
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         115);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         115);
    vlSelfRef.common_data_bus_tb__DOT__rst = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         186);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0x0101U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         188);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__14__name, Vcommon_data_bus_tb__ConstPool__CONST_h545a4deb_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__14__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0;
    __Vtask_common_data_bus_tb__DOT__check_bool__14__expected = 1U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__14__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__14__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__14__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__14__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__14__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__14__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__14__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check_bool__15__name, Vcommon_data_bus_tb__ConstPool__CONST_ha4a38edb_0);
    __Vtask_common_data_bus_tb__DOT__check_bool__15__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb1;
    __Vtask_common_data_bus_tb__DOT__check_bool__15__expected = 1U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check_bool__15__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check_bool__15__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__15__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__15__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check_bool__15__name.data(),
                     1,(IData)(__Vtask_common_data_bus_tb__DOT__check_bool__15__expected),
                     1,__Vtask_common_data_bus_tb__DOT__check_bool__15__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875882__0(vlSelf, 
                                                              "@(negedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875882__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         193);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         193);
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check5__16__name, Vcommon_data_bus_tb__ConstPool__CONST_hc3ce95bc_0);
    __Vtask_common_data_bus_tb__DOT__check5__16__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0;
    __Vtask_common_data_bus_tb__DOT__check5__16__expected = 0U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check5__16__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check5__16__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__16__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__16__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%0# got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__16__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__16__expected),
                     5,__Vtask_common_data_bus_tb__DOT__check5__16__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check5__17__name, Vcommon_data_bus_tb__ConstPool__CONST_h1708f4f9_0);
    __Vtask_common_data_bus_tb__DOT__check5__17__actual 
        = vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1;
    __Vtask_common_data_bus_tb__DOT__check5__17__expected = 8U;
    if (((IData)(__Vtask_common_data_bus_tb__DOT__check5__17__expected) 
         == (IData)(__Vtask_common_data_bus_tb__DOT__check5__17__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__17__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__17__actual));
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%0# got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check5__17__name.data(),
                     5,(IData)(__Vtask_common_data_bus_tb__DOT__check5__17__expected),
                     5,__Vtask_common_data_bus_tb__DOT__check5__17__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check32__18__name, Vcommon_data_bus_tb__ConstPool__CONST_he29a996a_0);
    __Vtask_common_data_bus_tb__DOT__check32__18__actual 
        = vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0;
    __Vtask_common_data_bus_tb__DOT__check32__18__expected = 0xa0000000U;
    if ((__Vtask_common_data_bus_tb__DOT__check32__18__expected 
         == __Vtask_common_data_bus_tb__DOT__check32__18__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__18__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__18__actual);
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__18__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__18__expected,
                     32,__Vtask_common_data_bus_tb__DOT__check32__18__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_common_data_bus_tb__DOT__check32__19__name, Vcommon_data_bus_tb__ConstPool__CONST_h5ac5f38e_0);
    __Vtask_common_data_bus_tb__DOT__check32__19__actual 
        = vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1;
    __Vtask_common_data_bus_tb__DOT__check32__19__expected = 0xa0000008U;
    if ((__Vtask_common_data_bus_tb__DOT__check32__19__expected 
         == __Vtask_common_data_bus_tb__DOT__check32__19__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__19__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__19__actual);
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_common_data_bus_tb__DOT__check32__19__name.data(),
                     32,__Vtask_common_data_bus_tb__DOT__check32__19__expected,
                     32,__Vtask_common_data_bus_tb__DOT__check32__19__actual);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 5: 8 simultaneous CDB0 requests ===\n",0);
    vlSelfRef.common_data_bus_tb__DOT__rst = 1U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         114);
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         115);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         115);
    vlSelfRef.common_data_bus_tb__DOT__rst = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         206);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         206);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0x00ffU;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         208);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         208);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    common_data_bus_tb__DOT__served_mask = 0U;
    common_data_bus_tb__DOT__served_count = 0U;
    common_data_bus_tb__DOT__timeout = 0U;
    while ((VL_GTS_III(32, 8U, common_data_bus_tb__DOT__served_count) 
            & VL_GTS_III(32, 0x0000001eU, common_data_bus_tb__DOT__timeout))) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0) 
                          & (~ (0U != ((IData)(common_data_bus_tb__DOT__served_mask) 
                                       & (IData)(vlSelfRef.common_data_bus_tb__DOT__granted_request_cdb0)))))))) {
            common_data_bus_tb__DOT__served_mask = 
                ((IData)(common_data_bus_tb__DOT__served_mask) 
                 | (IData)(vlSelfRef.common_data_bus_tb__DOT__granted_request_cdb0));
            common_data_bus_tb__DOT__served_count = 
                ((IData)(1U) + common_data_bus_tb__DOT__served_count);
            VL_WRITEF_NX("  cdb0_grant[%0d] granted=%08b adrs=%0#\n",0,
                         32,common_data_bus_tb__DOT__served_count,
                         8,(IData)(vlSelfRef.common_data_bus_tb__DOT__granted_request_cdb0),
                         5,vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0);
        }
        Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                                  "@(posedge common_data_bus_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge common_data_bus_tb.clk)", 
                                                             "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                             223);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                             223);
        common_data_bus_tb__DOT__timeout = ((IData)(1U) 
                                            + common_data_bus_tb__DOT__timeout);
    }
    if ((8U == common_data_bus_tb__DOT__served_count)) {
        VL_WRITEF_NX("PASS cdb0_all_8_served | iterations=%0d\n",0,
                     32,common_data_bus_tb__DOT__timeout);
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL cdb0_all_8_served | only %0d/8 served\n",0,
                     32,common_data_bus_tb__DOT__served_count);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 6: Priority within CDB0 section 0 ===\n",0);
    vlSelfRef.common_data_bus_tb__DOT__rst = 1U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         114);
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         115);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         115);
    vlSelfRef.common_data_bus_tb__DOT__rst = 0U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         242);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         242);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0x000fU;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         246);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         246);
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    common_data_bus_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, common_data_bus_tb__DOT__i)) {
        if (vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0) {
            if (((IData)(vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0) 
                 == (0x0000001fU & common_data_bus_tb__DOT__i))) {
                VL_WRITEF_NX("PASS cdb0_sec0_priority_%0d | got=%0#\n",0,
                             32,common_data_bus_tb__DOT__i,
                             5,(IData)(vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0));
            } else {
                VL_WRITEF_NX("FAIL cdb0_sec0_priority_%0d | expected=%0d got=%0#\n",0,
                             32,common_data_bus_tb__DOT__i,
                             32,common_data_bus_tb__DOT__i,
                             5,(IData)(vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0));
            }
        }
        Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                                  "@(posedge common_data_bus_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge common_data_bus_tb.clk)", 
                                                             "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                             258);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                             258);
        common_data_bus_tb__DOT__i = ((IData)(1U) + common_data_bus_tb__DOT__i);
    }
    VL_WRITEF_NX("\n=== TEST 7: BUG-2 fix \342\200\224 write_pendencies cleared by reset ===\n",0);
    vlSelfRef.common_data_bus_tb__DOT__rst = 1U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0x0100U;
    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(vlSelf, 
                                                              "@(posedge common_data_bus_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfa875bc8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge common_data_bus_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                                         270);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         270);
    vlSelfRef.common_data_bus_tb__DOT__rst = 0U;
    vlSelfRef.common_data_bus_tb__DOT__write_requests = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/common_data_bus_tb.sv", 
                                         273);
    if (vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb1) {
        VL_WRITEF_NX("BUG_CONFIRMED write_pendencies_persists_through_reset | rob_write_cdb1=1\n",0);
        common_data_bus_tb__DOT__fail_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("PASS write_pendencies_cleared_by_reset (BUG-2 fixed)\n",0);
        common_data_bus_tb__DOT__pass_count = ((IData)(1U) 
                                               + common_data_bus_tb__DOT__pass_count);
    }
    VL_WRITEF_NX("\n--- common_data_bus_tb: PASS=%0d FAIL=%0d ---\n\n",0,
                 32,common_data_bus_tb__DOT__pass_count,
                 32,common_data_bus_tb__DOT__fail_count);
    VL_FINISH_MT("/home/mark/sev3/testbenches/common_data_bus_tb.sv", 284, "");
    co_return;
}

void Vcommon_data_bus_tb___024root___eval_triggers_vec__act(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_triggers_vec__act\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.common_data_bus_tb__DOT__clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.common_data_bus_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0 
        = vlSelfRef.common_data_bus_tb__DOT__clk;
}

bool Vcommon_data_bus_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcommon_data_bus_tb___024root___act_comb__TOP__0(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___act_comb__TOP__0\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
        if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
            if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[7U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[7U];
            } else {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[6U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[6U];
            }
        } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[5U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[5U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[4U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[4U];
        }
    } else if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
        if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[3U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[3U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[2U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[2U];
        }
    } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[1U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[1U];
    } else {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[0U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[0U];
    }
    if ((4U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
        if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
            if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[15U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[15U];
            } else {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[14U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[14U];
            }
        } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[13U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[13U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[12U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[12U];
        }
    } else if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
        if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[11U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[11U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[10U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[10U];
        }
    } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[9U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[9U];
    } else {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[8U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[8U];
    }
}

void Vcommon_data_bus_tb___024root___eval_act(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_act\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcommon_data_bus_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 8> Vcommon_data_bus_tb__ConstPool__TABLE_hf9555510_0;

void Vcommon_data_bus_tb___024root___nba_sequent__TOP__0(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___nba_sequent__TOP__0\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter;
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter = 0;
    CData/*7:0*/ __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies;
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies = 0;
    CData/*0:0*/ __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter;
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter = 0;
    CData/*7:0*/ __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies;
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies = 0;
    // Body
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter 
        = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter;
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies 
        = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies;
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter 
        = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter;
    __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies 
        = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies;
    if (vlSelfRef.common_data_bus_tb__DOT__rst) {
        __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter = 0U;
        __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies = 0U;
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 0U;
        vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb1 = 0U;
        __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter = 0U;
        __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies = 0U;
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 0U;
        vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0 = 0U;
    } else {
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now 
            = (0x000000ffU & ((IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies) 
                              | ((IData)(vlSelfRef.common_data_bus_tb__DOT__write_requests) 
                                 >> 8U)));
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
            = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now;
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 0U;
        if (vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter) {
            if ((0x00000010U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0xefU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 4U;
            } else if ((0x00000020U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0xdfU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 5U;
            } else if ((0x00000040U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0xbfU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 6U;
            } else if ((0x00000080U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0x7fU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 7U;
            } else {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 0U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 0U;
            }
            if (((~ (0U != (0x0000000fU & ((IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant) 
                                           >> 4U)))) 
                 & (0U != (0x0000000fU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant))))) {
                __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter = 0U;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0xfeU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 0U;
            } else if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0xfdU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 1U;
            } else if ((4U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0xfbU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 2U;
            } else if ((8U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant 
                    = (0xf7U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 3U;
            } else {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = 0U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1 = 0U;
            }
            if (((~ (0U != (0x0000000fU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant)))) 
                 & (0U != (0x0000000fU & ((IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant) 
                                          >> 4U))))) {
                __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter = 1U;
            }
        }
        vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted;
        __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies 
            = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant;
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now 
            = (0x000000ffU & ((IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies) 
                              | (IData)(vlSelfRef.common_data_bus_tb__DOT__write_requests)));
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
            = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now;
        vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 0U;
        if (vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter) {
            if ((0x00000010U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0xefU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 4U;
            } else if ((0x00000020U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0xdfU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 5U;
            } else if ((0x00000040U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0xbfU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 6U;
            } else if ((0x00000080U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0x7fU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 7U;
            } else {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 0U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 0U;
            }
            if (((~ (0U != (0x0000000fU & ((IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant) 
                                           >> 4U)))) 
                 & (0U != (0x0000000fU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant))))) {
                __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter = 0U;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0xfeU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 0U;
            } else if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0xfdU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 1U;
            } else if ((4U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0xfbU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 2U;
            } else if ((8U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now))) {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant 
                    = (0xf7U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant));
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 1U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 3U;
            } else {
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = 0U;
                vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0 = 0U;
            }
            if (((~ (0U != (0x0000000fU & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant)))) 
                 & (0U != (0x0000000fU & ((IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant) 
                                          >> 4U))))) {
                __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter = 1U;
            }
        }
        vlSelfRef.common_data_bus_tb__DOT__rob_write_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted;
        __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies 
            = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant;
    }
    vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter 
        = __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter;
    vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies 
        = __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies;
    vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter 
        = __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter;
    vlSelfRef.common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies 
        = __Vdly__common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies;
    __Vtableidx1 = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0;
    vlSelfRef.common_data_bus_tb__DOT__granted_request_cdb0 
        = Vcommon_data_bus_tb__ConstPool__TABLE_hf9555510_0
        [__Vtableidx1];
}

void Vcommon_data_bus_tb___024root___nba_comb__TOP__0(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___nba_comb__TOP__0\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
        if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
            if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[15U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[15U];
            } else {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[14U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[14U];
            }
        } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[13U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[13U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[12U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[12U];
        }
    } else if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
        if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[11U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[11U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[10U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[10U];
        }
    } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected1))) {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[9U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[9U];
    } else {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[8U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb1 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[8U];
    }
    if ((4U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
        if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
            if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[7U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[7U];
            } else {
                vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[6U];
                vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                    = vlSelfRef.common_data_bus_tb__DOT__data_in[6U];
            }
        } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[5U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[5U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[4U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[4U];
        }
    } else if ((2U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
        if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[3U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[3U];
        } else {
            vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[2U];
            vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
                = vlSelfRef.common_data_bus_tb__DOT__data_in[2U];
        }
    } else if ((1U & (IData)(vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0))) {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[1U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[1U];
    } else {
        vlSelfRef.common_data_bus_tb__DOT__rob_address_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__rob_adrs[0U];
        vlSelfRef.common_data_bus_tb__DOT__data_out_cdb0 
            = vlSelfRef.common_data_bus_tb__DOT__data_in[0U];
    }
}

void Vcommon_data_bus_tb___024root___eval_nba(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_nba\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcommon_data_bus_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcommon_data_bus_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vcommon_data_bus_tb___024root___timing_ready(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___timing_ready\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready("@(posedge common_data_bus_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hfa875882__0.ready("@(negedge common_data_bus_tb.clk)");
    }
}

void Vcommon_data_bus_tb___024root___timing_resume(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___timing_resume\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hfa875bc8__0.moveToResumeQueue(
                                                          "@(posedge common_data_bus_tb.clk)");
    vlSelfRef.__VtrigSched_hfa875882__0.moveToResumeQueue(
                                                          "@(negedge common_data_bus_tb.clk)");
    vlSelfRef.__VtrigSched_hfa875bc8__0.resume("@(posedge common_data_bus_tb.clk)");
    vlSelfRef.__VtrigSched_hfa875882__0.resume("@(negedge common_data_bus_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcommon_data_bus_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcommon_data_bus_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcommon_data_bus_tb___024root___eval_phase__act(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_phase__act\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcommon_data_bus_tb___024root___eval_triggers_vec__act(vlSelf);
    Vcommon_data_bus_tb___024root___timing_ready(vlSelf);
    Vcommon_data_bus_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcommon_data_bus_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcommon_data_bus_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcommon_data_bus_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vcommon_data_bus_tb___024root___timing_resume(vlSelf);
        Vcommon_data_bus_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcommon_data_bus_tb___024root___eval_phase__inact(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_phase__inact\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/mark/sev3/testbenches/common_data_bus_tb.sv", 12, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vcommon_data_bus_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcommon_data_bus_tb___024root___eval_phase__nba(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_phase__nba\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcommon_data_bus_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcommon_data_bus_tb___024root___eval_nba(vlSelf);
        Vcommon_data_bus_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcommon_data_bus_tb___024root___eval(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcommon_data_bus_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/common_data_bus_tb.sv", 12, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/mark/sev3/testbenches/common_data_bus_tb.sv", 12, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vcommon_data_bus_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/mark/sev3/testbenches/common_data_bus_tb.sv", 12, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vcommon_data_bus_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vcommon_data_bus_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcommon_data_bus_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0(Vcommon_data_bus_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875bc8__0\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.common_data_bus_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.common_data_bus_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0 
        = vlSelfRef.common_data_bus_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hfa875882__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875882__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875882__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875882__0(Vcommon_data_bus_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root____VbeforeTrig_hfa875882__0\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.common_data_bus_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.common_data_bus_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0 
        = vlSelfRef.common_data_bus_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875bc8__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hfa875882__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875882__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfa875882__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vcommon_data_bus_tb___024root___eval_debug_assertions(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_debug_assertions\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
