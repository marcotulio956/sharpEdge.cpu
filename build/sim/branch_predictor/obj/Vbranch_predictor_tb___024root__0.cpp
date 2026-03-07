// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_predictor_tb.h for the primary calling header

#include "Vbranch_predictor_tb__pch.h"

VlCoroutine Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__0(Vbranch_predictor_tb___024root* vlSelf);
VlCoroutine Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__1(Vbranch_predictor_tb___024root* vlSelf);

void Vbranch_predictor_tb___024root___eval_initial(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_initial\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__0(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_predictor_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                             17);
        vlSelfRef.branch_predictor_tb__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.branch_predictor_tb__DOT__clk)));
    }
    co_return;
}

void Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(Vbranch_predictor_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_h1983fe77_0;
void Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(Vbranch_predictor_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_h50b4e247_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_h875494e3_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_h94ffdd6a_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_h2fc6cbae_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_ha1d5f5da_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_hed19df0d_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_he8dd1253_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_hbd233387_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_hb786a16c_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_h3caa1573_0;
extern const VlWide<8>/*255:0*/ Vbranch_predictor_tb__ConstPool__CONST_h96250129_0;

VlCoroutine Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__1(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ branch_predictor_tb__DOT__pass_count;
    branch_predictor_tb__DOT__pass_count = 0;
    IData/*31:0*/ branch_predictor_tb__DOT__fail_count;
    branch_predictor_tb__DOT__fail_count = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__0__expected;
    __Vtask_branch_predictor_tb__DOT__check__0__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__0__actual;
    __Vtask_branch_predictor_tb__DOT__check__0__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__0__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__0__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__1__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__1__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__2__expected;
    __Vtask_branch_predictor_tb__DOT__check__2__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__2__actual;
    __Vtask_branch_predictor_tb__DOT__check__2__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__2__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__2__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__3__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__3__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__4__expected;
    __Vtask_branch_predictor_tb__DOT__check__4__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__4__actual;
    __Vtask_branch_predictor_tb__DOT__check__4__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__4__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__4__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__5__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__5__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__6__expected;
    __Vtask_branch_predictor_tb__DOT__check__6__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__6__actual;
    __Vtask_branch_predictor_tb__DOT__check__6__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__6__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__6__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__7__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__7__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__8__expected;
    __Vtask_branch_predictor_tb__DOT__check__8__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__8__actual;
    __Vtask_branch_predictor_tb__DOT__check__8__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__8__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__8__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__9__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__9__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__10__expected;
    __Vtask_branch_predictor_tb__DOT__check__10__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__10__actual;
    __Vtask_branch_predictor_tb__DOT__check__10__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__10__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__10__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__11__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__11__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__12__expected;
    __Vtask_branch_predictor_tb__DOT__check__12__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__12__actual;
    __Vtask_branch_predictor_tb__DOT__check__12__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__12__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__12__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__13__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__13__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__14__expected;
    __Vtask_branch_predictor_tb__DOT__check__14__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__14__actual;
    __Vtask_branch_predictor_tb__DOT__check__14__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__14__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__14__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__15__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__15__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__16__expected;
    __Vtask_branch_predictor_tb__DOT__check__16__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__16__actual;
    __Vtask_branch_predictor_tb__DOT__check__16__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__16__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__16__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__17__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__17__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__18__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__18__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__19__expected;
    __Vtask_branch_predictor_tb__DOT__check__19__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__19__actual;
    __Vtask_branch_predictor_tb__DOT__check__19__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__19__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__19__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__20__expected;
    __Vtask_branch_predictor_tb__DOT__check__20__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__20__actual;
    __Vtask_branch_predictor_tb__DOT__check__20__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__20__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__20__name);
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__one_transition__21__taken;
    __Vtask_branch_predictor_tb__DOT__one_transition__21__taken = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__22__expected;
    __Vtask_branch_predictor_tb__DOT__check__22__expected = 0;
    CData/*0:0*/ __Vtask_branch_predictor_tb__DOT__check__22__actual;
    __Vtask_branch_predictor_tb__DOT__check__22__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_branch_predictor_tb__DOT__check__22__name;
    VL_ZERO_W(256, __Vtask_branch_predictor_tb__DOT__check__22__name);
    // Body
    branch_predictor_tb__DOT__pass_count = 0U;
    branch_predictor_tb__DOT__fail_count = 0U;
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken = 0U;
    vlSelfRef.branch_predictor_tb__DOT__rst = 1U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         62);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         62);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__0__name, Vbranch_predictor_tb__ConstPool__CONST_h1983fe77_0);
    __Vtask_branch_predictor_tb__DOT__check__0__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__0__expected = 1U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__0__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__0__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__0__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__0__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__0__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__0__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__0__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    vlSelfRef.branch_predictor_tb__DOT__rst = 0U;
    __Vtask_branch_predictor_tb__DOT__one_transition__1__taken = 0U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__1__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__2__name, Vbranch_predictor_tb__ConstPool__CONST_h50b4e247_0);
    __Vtask_branch_predictor_tb__DOT__check__2__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__2__expected = 0U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__2__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__2__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__2__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__2__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__2__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__2__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__2__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__3__taken = 0U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__3__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__4__name, Vbranch_predictor_tb__ConstPool__CONST_h875494e3_0);
    __Vtask_branch_predictor_tb__DOT__check__4__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__4__expected = 0U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__4__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__4__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__4__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__4__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__4__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__4__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__4__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__5__taken = 0U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__5__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__6__name, Vbranch_predictor_tb__ConstPool__CONST_h94ffdd6a_0);
    __Vtask_branch_predictor_tb__DOT__check__6__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__6__expected = 0U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__6__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__6__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__6__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__6__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__6__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__6__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__6__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__7__taken = 1U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__7__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__8__name, Vbranch_predictor_tb__ConstPool__CONST_h2fc6cbae_0);
    __Vtask_branch_predictor_tb__DOT__check__8__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__8__expected = 0U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__8__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__8__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__8__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__8__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__8__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__8__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__8__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__9__taken = 1U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__9__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__10__name, Vbranch_predictor_tb__ConstPool__CONST_ha1d5f5da_0);
    __Vtask_branch_predictor_tb__DOT__check__10__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__10__expected = 1U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__10__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__10__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__10__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__10__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__10__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__10__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__10__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__11__taken = 1U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__11__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__12__name, Vbranch_predictor_tb__ConstPool__CONST_hed19df0d_0);
    __Vtask_branch_predictor_tb__DOT__check__12__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__12__expected = 1U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__12__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__12__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__12__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__12__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__12__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__12__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__12__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__13__taken = 1U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__13__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__14__name, Vbranch_predictor_tb__ConstPool__CONST_he8dd1253_0);
    __Vtask_branch_predictor_tb__DOT__check__14__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__14__expected = 1U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__14__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__14__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__14__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__14__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__14__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__14__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__14__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__15__taken = 0U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__15__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__16__name, Vbranch_predictor_tb__ConstPool__CONST_hbd233387_0);
    __Vtask_branch_predictor_tb__DOT__check__16__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__16__expected = 1U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__16__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__16__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__16__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__16__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__16__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__16__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__16__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    __Vtask_branch_predictor_tb__DOT__one_transition__17__taken = 0U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__17__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    __Vtask_branch_predictor_tb__DOT__one_transition__18__taken = 0U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__18__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__19__name, Vbranch_predictor_tb__ConstPool__CONST_hb786a16c_0);
    __Vtask_branch_predictor_tb__DOT__check__19__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__19__expected = 0U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__19__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__19__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__19__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__19__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__19__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__19__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__19__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    vlSelfRef.branch_predictor_tb__DOT__rst = 1U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         104);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         104);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__20__name, Vbranch_predictor_tb__ConstPool__CONST_h3caa1573_0);
    __Vtask_branch_predictor_tb__DOT__check__20__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__20__expected = 1U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__20__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__20__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__20__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__20__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__20__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__20__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__20__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    vlSelfRef.branch_predictor_tb__DOT__rst = 0U;
    __Vtask_branch_predictor_tb__DOT__one_transition__21__taken = 0U;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(vlSelf, 
                                                               "@(negedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f80__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         47);
    vlSelfRef.branch_predictor_tb__DOT__branch = 1U;
    vlSelfRef.branch_predictor_tb__DOT__branch_taken 
        = __Vtask_branch_predictor_tb__DOT__one_transition__21__taken;
    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(vlSelf, 
                                                               "@(posedge branch_predictor_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hacc80f2a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge branch_predictor_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                                         50);
    vlSelfRef.branch_predictor_tb__DOT__branch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/branch_predictor_tb.sv", 
                                         52);
    VL_ASSIGN_W(256, __Vtask_branch_predictor_tb__DOT__check__22__name, Vbranch_predictor_tb__ConstPool__CONST_h96250129_0);
    __Vtask_branch_predictor_tb__DOT__check__22__actual 
        = (1U & ((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 >> 1U));
    __Vtask_branch_predictor_tb__DOT__check__22__expected = 0U;
    if (((IData)(__Vtask_branch_predictor_tb__DOT__check__22__expected) 
         == (IData)(__Vtask_branch_predictor_tb__DOT__check__22__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__22__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__22__actual));
        branch_predictor_tb__DOT__pass_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_branch_predictor_tb__DOT__check__22__name.data(),
                     1,(IData)(__Vtask_branch_predictor_tb__DOT__check__22__expected),
                     1,__Vtask_branch_predictor_tb__DOT__check__22__actual);
        branch_predictor_tb__DOT__fail_count = ((IData)(1U) 
                                                + branch_predictor_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- branch_predictor_tb: PASS=%0d FAIL=%0d ---\n\n",0,
                 32,branch_predictor_tb__DOT__pass_count,
                 32,branch_predictor_tb__DOT__fail_count);
    VL_FINISH_MT("/home/mark/sev3/testbenches/branch_predictor_tb.sv", 113, "");
    co_return;
}

void Vbranch_predictor_tb___024root___eval_triggers_vec__act(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_triggers_vec__act\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.branch_predictor_tb__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.branch_predictor_tb__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0))) 
                                                         << 2U)) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.branch_predictor_tb__DOT__clk) 
                                                           ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0 
        = vlSelfRef.branch_predictor_tb__DOT__clk;
}

bool Vbranch_predictor_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 32> Vbranch_predictor_tb__ConstPool__TABLE_h42881490_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vbranch_predictor_tb__ConstPool__TABLE_h51cc2a86_0;

void Vbranch_predictor_tb___024root___nba_sequent__TOP__0(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___nba_sequent__TOP__0\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                      << 3U) | ((IData)(vlSelfRef.branch_predictor_tb__DOT__branch_taken) 
                                << 2U)) | (((IData)(vlSelfRef.branch_predictor_tb__DOT__branch) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.branch_predictor_tb__DOT__rst)));
    if (Vbranch_predictor_tb__ConstPool__TABLE_h42881490_0
        [__Vtableidx1]) {
        vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state 
            = Vbranch_predictor_tb__ConstPool__TABLE_h51cc2a86_0
            [__Vtableidx1];
    }
}

void Vbranch_predictor_tb___024root___eval_nba(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_nba\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vinline__nba_sequent__TOP__0___Vtableidx1;
    __Vinline__nba_sequent__TOP__0___Vtableidx1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vtableidx1 
            = ((((IData)(vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state) 
                 << 3U) | ((IData)(vlSelfRef.branch_predictor_tb__DOT__branch_taken) 
                           << 2U)) | (((IData)(vlSelfRef.branch_predictor_tb__DOT__branch) 
                                       << 1U) | (IData)(vlSelfRef.branch_predictor_tb__DOT__rst)));
        if (Vbranch_predictor_tb__ConstPool__TABLE_h42881490_0
            [__Vinline__nba_sequent__TOP__0___Vtableidx1]) {
            vlSelfRef.branch_predictor_tb__DOT___DUT___DOT__state 
                = Vbranch_predictor_tb__ConstPool__TABLE_h51cc2a86_0
                [__Vinline__nba_sequent__TOP__0___Vtableidx1];
        }
    }
}

void Vbranch_predictor_tb___024root___timing_ready(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___timing_ready\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready("@(posedge branch_predictor_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hacc80f80__0.ready("@(negedge branch_predictor_tb.clk)");
    }
}

void Vbranch_predictor_tb___024root___timing_resume(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___timing_resume\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hacc80f2a__0.moveToResumeQueue(
                                                          "@(posedge branch_predictor_tb.clk)");
    vlSelfRef.__VtrigSched_hacc80f80__0.moveToResumeQueue(
                                                          "@(negedge branch_predictor_tb.clk)");
    vlSelfRef.__VtrigSched_hacc80f2a__0.resume("@(posedge branch_predictor_tb.clk)");
    vlSelfRef.__VtrigSched_hacc80f80__0.resume("@(negedge branch_predictor_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vbranch_predictor_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vbranch_predictor_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vbranch_predictor_tb___024root___eval_phase__act(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_phase__act\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vbranch_predictor_tb___024root___eval_triggers_vec__act(vlSelf);
    Vbranch_predictor_tb___024root___timing_ready(vlSelf);
    Vbranch_predictor_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbranch_predictor_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vbranch_predictor_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vbranch_predictor_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vbranch_predictor_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vbranch_predictor_tb___024root___eval_phase__inact(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_phase__inact\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/mark/sev3/testbenches/branch_predictor_tb.sv", 10, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vbranch_predictor_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vbranch_predictor_tb___024root___eval_phase__nba(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_phase__nba\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vbranch_predictor_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vbranch_predictor_tb___024root___eval_nba(vlSelf);
        Vbranch_predictor_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vbranch_predictor_tb___024root___eval(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbranch_predictor_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/branch_predictor_tb.sv", 10, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/mark/sev3/testbenches/branch_predictor_tb.sv", 10, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vbranch_predictor_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/mark/sev3/testbenches/branch_predictor_tb.sv", 10, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vbranch_predictor_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vbranch_predictor_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vbranch_predictor_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0(Vbranch_predictor_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f2a__0\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.branch_predictor_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0)) 
                                   << 3U) | (((IData)(vlSelfRef.branch_predictor_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0))) 
                                             << 2U))));
    vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0 
        = vlSelfRef.branch_predictor_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0(Vbranch_predictor_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root____VbeforeTrig_hacc80f80__0\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.branch_predictor_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0)) 
                                   << 3U) | (((IData)(vlSelfRef.branch_predictor_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0))) 
                                             << 2U))));
    vlSelfRef.__Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0 
        = vlSelfRef.branch_predictor_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f2a__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hacc80f80__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vbranch_predictor_tb___024root___eval_debug_assertions(Vbranch_predictor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_predictor_tb___024root___eval_debug_assertions\n"); );
    Vbranch_predictor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
