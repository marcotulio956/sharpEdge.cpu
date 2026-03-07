// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthread_scheduler_tb.h for the primary calling header

#include "Vthread_scheduler_tb__pch.h"

VlCoroutine Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__0(Vthread_scheduler_tb___024root* vlSelf);
VlCoroutine Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__1(Vthread_scheduler_tb___024root* vlSelf);

void Vthread_scheduler_tb___024root___eval_initial(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_initial\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__0(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thread_scheduler_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                             14);
        vlSelfRef.thread_scheduler_tb__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.thread_scheduler_tb__DOT__clk)));
    }
    co_return;
}

void Vthread_scheduler_tb___024root____VbeforeTrig_hde98c31c__0(Vthread_scheduler_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_h267bd7cf_0;
void Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(Vthread_scheduler_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_h695fbe4a_0;
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_h03e56908_0;
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_hfdda2ec0_0;
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_h37fdf65a_0;
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_hdd15038a_0;
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_he273e199_0;
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_h40998833_0;
extern const VlWide<8>/*255:0*/ Vthread_scheduler_tb__ConstPool__CONST_h8ea61cf5_0;

VlCoroutine Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__1(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ thread_scheduler_tb__DOT__pass_count;
    thread_scheduler_tb__DOT__pass_count = 0;
    IData/*31:0*/ thread_scheduler_tb__DOT__fail_count;
    thread_scheduler_tb__DOT__fail_count = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__0__expected;
    __Vtask_thread_scheduler_tb__DOT__check__0__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__0__actual;
    __Vtask_thread_scheduler_tb__DOT__check__0__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__0__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__0__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__1__expected;
    __Vtask_thread_scheduler_tb__DOT__check__1__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__1__actual;
    __Vtask_thread_scheduler_tb__DOT__check__1__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__1__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__1__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__2__expected;
    __Vtask_thread_scheduler_tb__DOT__check__2__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__2__actual;
    __Vtask_thread_scheduler_tb__DOT__check__2__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__2__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__2__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__3__expected;
    __Vtask_thread_scheduler_tb__DOT__check__3__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__3__actual;
    __Vtask_thread_scheduler_tb__DOT__check__3__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__3__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__3__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__4__expected;
    __Vtask_thread_scheduler_tb__DOT__check__4__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__4__actual;
    __Vtask_thread_scheduler_tb__DOT__check__4__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__4__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__4__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__5__expected;
    __Vtask_thread_scheduler_tb__DOT__check__5__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__5__actual;
    __Vtask_thread_scheduler_tb__DOT__check__5__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__5__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__5__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__6__expected;
    __Vtask_thread_scheduler_tb__DOT__check__6__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__6__actual;
    __Vtask_thread_scheduler_tb__DOT__check__6__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__6__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__6__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__7__expected;
    __Vtask_thread_scheduler_tb__DOT__check__7__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__7__actual;
    __Vtask_thread_scheduler_tb__DOT__check__7__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__7__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__7__name);
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__8__expected;
    __Vtask_thread_scheduler_tb__DOT__check__8__expected = 0;
    CData/*0:0*/ __Vtask_thread_scheduler_tb__DOT__check__8__actual;
    __Vtask_thread_scheduler_tb__DOT__check__8__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_thread_scheduler_tb__DOT__check__8__name;
    VL_ZERO_W(256, __Vtask_thread_scheduler_tb__DOT__check__8__name);
    // Body
    thread_scheduler_tb__DOT__pass_count = 0U;
    thread_scheduler_tb__DOT__fail_count = 0U;
    vlSelfRef.thread_scheduler_tb__DOT__rst = 1U;
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c31c__0(vlSelf, 
                                                               "@(posedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c31c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         45);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         45);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__0__name, Vthread_scheduler_tb__ConstPool__CONST_h267bd7cf_0);
    __Vtask_thread_scheduler_tb__DOT__check__0__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__0__expected = 0U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__0__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__0__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__0__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__0__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__0__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__0__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__0__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    vlSelfRef.thread_scheduler_tb__DOT__rst = 0U;
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(vlSelf, 
                                                               "@(negedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c3ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         53);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__1__name, Vthread_scheduler_tb__ConstPool__CONST_h695fbe4a_0);
    __Vtask_thread_scheduler_tb__DOT__check__1__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__1__expected = 1U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__1__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__1__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__1__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__1__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__1__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__1__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__1__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(vlSelf, 
                                                               "@(negedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c3ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         56);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         56);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__2__name, Vthread_scheduler_tb__ConstPool__CONST_h03e56908_0);
    __Vtask_thread_scheduler_tb__DOT__check__2__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__2__expected = 0U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__2__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__2__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__2__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__2__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__2__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__2__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__2__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(vlSelf, 
                                                               "@(negedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c3ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         59);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         59);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__3__name, Vthread_scheduler_tb__ConstPool__CONST_hfdda2ec0_0);
    __Vtask_thread_scheduler_tb__DOT__check__3__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__3__expected = 1U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__3__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__3__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__3__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__3__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__3__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__3__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__3__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(vlSelf, 
                                                               "@(negedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c3ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         62);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         62);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__4__name, Vthread_scheduler_tb__ConstPool__CONST_h37fdf65a_0);
    __Vtask_thread_scheduler_tb__DOT__check__4__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__4__expected = 0U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__4__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__4__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__4__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__4__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__4__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__4__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__4__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c31c__0(vlSelf, 
                                                               "@(posedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c31c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         68);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         68);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__5__name, Vthread_scheduler_tb__ConstPool__CONST_hdd15038a_0);
    __Vtask_thread_scheduler_tb__DOT__check__5__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__5__expected = 0U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__5__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__5__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__5__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__5__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__5__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__5__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__5__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(vlSelf, 
                                                               "@(negedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c3ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         74);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         74);
    vlSelfRef.thread_scheduler_tb__DOT__rst = 1U;
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c31c__0(vlSelf, 
                                                               "@(posedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c31c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         76);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         76);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__6__name, Vthread_scheduler_tb__ConstPool__CONST_he273e199_0);
    __Vtask_thread_scheduler_tb__DOT__check__6__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__6__expected = 0U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__6__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__6__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__6__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__6__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__6__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__6__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__6__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    vlSelfRef.thread_scheduler_tb__DOT__rst = 0U;
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(vlSelf, 
                                                               "@(negedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c3ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         80);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         80);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__7__name, Vthread_scheduler_tb__ConstPool__CONST_h40998833_0);
    __Vtask_thread_scheduler_tb__DOT__check__7__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__7__expected = 1U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__7__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__7__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__7__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__7__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__7__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__7__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__7__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(vlSelf, 
                                                               "@(negedge thread_scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hde98c3ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge thread_scheduler_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                                         83);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 
                                         83);
    VL_ASSIGN_W(256, __Vtask_thread_scheduler_tb__DOT__check__8__name, Vthread_scheduler_tb__ConstPool__CONST_h8ea61cf5_0);
    __Vtask_thread_scheduler_tb__DOT__check__8__actual 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    __Vtask_thread_scheduler_tb__DOT__check__8__expected = 0U;
    if (((IData)(__Vtask_thread_scheduler_tb__DOT__check__8__expected) 
         == (IData)(__Vtask_thread_scheduler_tb__DOT__check__8__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__8__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__8__actual));
        thread_scheduler_tb__DOT__pass_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_thread_scheduler_tb__DOT__check__8__name.data(),
                     1,(IData)(__Vtask_thread_scheduler_tb__DOT__check__8__expected),
                     1,__Vtask_thread_scheduler_tb__DOT__check__8__actual);
        thread_scheduler_tb__DOT__fail_count = ((IData)(1U) 
                                                + thread_scheduler_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- thread_scheduler_tb: PASS=%0d FAIL=%0d ---\n\n",0,
                 32,thread_scheduler_tb__DOT__pass_count,
                 32,thread_scheduler_tb__DOT__fail_count);
    VL_FINISH_MT("/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 88, "");
    co_return;
}

void Vthread_scheduler_tb___024root___eval_triggers_vec__act(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_triggers_vec__act\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.thread_scheduler_tb__DOT__clk) 
                                                          ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.thread_scheduler_tb__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.thread_scheduler_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0 
        = vlSelfRef.thread_scheduler_tb__DOT__clk;
}

bool Vthread_scheduler_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___trigger_anySet__act\n"); );
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

void Vthread_scheduler_tb___024root___nba_sequent__TOP__0(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___nba_sequent__TOP__0\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving 
        = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
}

void Vthread_scheduler_tb___024root___nba_sequent__TOP__1(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___nba_sequent__TOP__1\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.thread_scheduler_tb__DOT__rst) {
        vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving = 0U;
    }
}

void Vthread_scheduler_tb___024root___nba_sequent__TOP__2(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___nba_sequent__TOP__2\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving 
        = ((IData)(vlSelfRef.thread_scheduler_tb__DOT__interleaving)
            ? 0U : 1U);
}

void Vthread_scheduler_tb___024root___nba_sequent__TOP__3(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___nba_sequent__TOP__3\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thread_scheduler_tb__DOT__interleaving 
        = vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving;
}

void Vthread_scheduler_tb___024root___eval_nba(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_nba\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving 
            = vlSelfRef.thread_scheduler_tb__DOT__interleaving;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.thread_scheduler_tb__DOT__rst) {
            vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving = 0U;
        }
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving 
            = ((IData)(vlSelfRef.thread_scheduler_tb__DOT__interleaving)
                ? 0U : 1U);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.thread_scheduler_tb__DOT__interleaving 
            = vlSelfRef.__Vdly__thread_scheduler_tb__DOT__interleaving;
    }
}

void Vthread_scheduler_tb___024root___timing_ready(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___timing_ready\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hde98c31c__0.ready("@(posedge thread_scheduler_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready("@(negedge thread_scheduler_tb.clk)");
    }
}

void Vthread_scheduler_tb___024root___timing_resume(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___timing_resume\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hde98c31c__0.moveToResumeQueue(
                                                          "@(posedge thread_scheduler_tb.clk)");
    vlSelfRef.__VtrigSched_hde98c3ee__0.moveToResumeQueue(
                                                          "@(negedge thread_scheduler_tb.clk)");
    vlSelfRef.__VtrigSched_hde98c31c__0.resume("@(posedge thread_scheduler_tb.clk)");
    vlSelfRef.__VtrigSched_hde98c3ee__0.resume("@(negedge thread_scheduler_tb.clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vthread_scheduler_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vthread_scheduler_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vthread_scheduler_tb___024root___eval_phase__act(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_phase__act\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vthread_scheduler_tb___024root___eval_triggers_vec__act(vlSelf);
    Vthread_scheduler_tb___024root___timing_ready(vlSelf);
    Vthread_scheduler_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vthread_scheduler_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vthread_scheduler_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vthread_scheduler_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vthread_scheduler_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vthread_scheduler_tb___024root___eval_phase__inact(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_phase__inact\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 7, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vthread_scheduler_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vthread_scheduler_tb___024root___eval_phase__nba(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_phase__nba\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vthread_scheduler_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vthread_scheduler_tb___024root___eval_nba(vlSelf);
        Vthread_scheduler_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vthread_scheduler_tb___024root___eval(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vthread_scheduler_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 7, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vthread_scheduler_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/mark/sev3/testbenches/thread_scheduler_tb.sv", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vthread_scheduler_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vthread_scheduler_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vthread_scheduler_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vthread_scheduler_tb___024root____VbeforeTrig_hde98c31c__0(Vthread_scheduler_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c31c__0\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.thread_scheduler_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.thread_scheduler_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0 
        = vlSelfRef.thread_scheduler_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hde98c31c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c31c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c31c__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0(Vthread_scheduler_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root____VbeforeTrig_hde98c3ee__0\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.thread_scheduler_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.thread_scheduler_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0 
        = vlSelfRef.thread_scheduler_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hde98c31c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c31c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c31c__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde98c3ee__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vthread_scheduler_tb___024root___eval_debug_assertions(Vthread_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread_scheduler_tb___024root___eval_debug_assertions\n"); );
    Vthread_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
