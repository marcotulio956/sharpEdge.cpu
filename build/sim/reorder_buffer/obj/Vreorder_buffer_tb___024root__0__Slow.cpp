// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreorder_buffer_tb.h for the primary calling header

#include "Vreorder_buffer_tb__pch.h"

void Vreorder_buffer_tb___024root___timing_ready(Vreorder_buffer_tb___024root* vlSelf);

VL_ATTR_COLD void Vreorder_buffer_tb___024root___eval_static(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_static\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0 
        = vlSelfRef.reorder_buffer_tb__DOT__clk;
    Vreorder_buffer_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vreorder_buffer_tb___024root___eval_final(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_final\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreorder_buffer_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vreorder_buffer_tb___024root___eval_phase__stl(Vreorder_buffer_tb___024root* vlSelf);

VL_ATTR_COLD void Vreorder_buffer_tb___024root___eval_settle(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_settle\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vreorder_buffer_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 13, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vreorder_buffer_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vreorder_buffer_tb___024root___eval_triggers_vec__stl(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_triggers_vec__stl\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vreorder_buffer_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreorder_buffer_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vreorder_buffer_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vreorder_buffer_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vreorder_buffer_tb___024root___stl_sequent__TOP__0(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___stl_sequent__TOP__0\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
    vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool 
        = (((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                            - (IData)(1U))) != (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail)) 
           & (IData)(vlSelfRef.reorder_buffer_tb__DOT__write_entry));
    vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool 
        = ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)) 
           & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
              >> (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
    vlSelfRef.reorder_buffer_tb__DOT__ready2_instruction_bool 
        = ((IData)(vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) 
           & ((0x1eU >= (0x0000001fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)))) 
              & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                 >> (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))))));
}

VL_ATTR_COLD void Vreorder_buffer_tb___024root___eval_stl(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_stl\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead 
            = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
        vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool 
            = (((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                                - (IData)(1U))) != (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail)) 
               & (IData)(vlSelfRef.reorder_buffer_tb__DOT__write_entry));
        vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool 
            = ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)) 
               & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                  >> (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
        vlSelfRef.reorder_buffer_tb__DOT__ready2_instruction_bool 
            = ((IData)(vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) 
               & ((0x1eU >= (0x0000001fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)))) 
                  & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                     >> (0x0000001fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))))));
    }
}

VL_ATTR_COLD bool Vreorder_buffer_tb___024root___eval_phase__stl(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_phase__stl\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vreorder_buffer_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreorder_buffer_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vreorder_buffer_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vreorder_buffer_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vreorder_buffer_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreorder_buffer_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vreorder_buffer_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(edge reorder_buffer_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge reorder_buffer_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge reorder_buffer_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreorder_buffer_tb___024root___ctor_var_reset(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___ctor_var_reset\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->reorder_buffer_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8808016957005820766ull);
    vlSelf->reorder_buffer_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2422040291680769076ull);
    vlSelf->reorder_buffer_tb__DOT__write_entry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 942672687613226451ull);
    vlSelf->reorder_buffer_tb__DOT__entry_opc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 407637385661519741ull);
    vlSelf->reorder_buffer_tb__DOT__entry_destination = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16171596678709676192ull);
    vlSelf->reorder_buffer_tb__DOT__entry_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18075620751251472103ull);
    vlSelf->reorder_buffer_tb__DOT__cdb_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3256048377689736569ull);
    vlSelf->reorder_buffer_tb__DOT__cdb_snooped_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14702526018566173228ull);
    vlSelf->reorder_buffer_tb__DOT__cdb_rob_adrs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18098701211738149475ull);
    vlSelf->reorder_buffer_tb__DOT__cdb_exception = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16181894343069841890ull);
    vlSelf->reorder_buffer_tb__DOT__created_entry_bool = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2849474919145938999ull);
    vlSelf->reorder_buffer_tb__DOT__ready1_instruction_bool = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9126438112956705778ull);
    vlSelf->reorder_buffer_tb__DOT__ready2_instruction_bool = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2790725633592986695ull);
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__1 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_ha219d3de__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h2139a5d7__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_haf3df95a__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h5a9a1b20__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hbd3dc64f__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_he2a65739__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h236f626c__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hb27e5a1c__0 = 0;
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT__poshead = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9148514993607153294ull);
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT__head = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12347911331624205827ull);
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT__tail = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9240477528995926184ull);
    vlSelf->reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 11392185076708978056ull);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->reorder_buffer_tb__DOT___DUT___DOT__pc_state[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8791436685558409723ull);
    }
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->reorder_buffer_tb__DOT___DUT___DOT__exception[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5420504271645960561ull);
    }
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->reorder_buffer_tb__DOT___DUT___DOT__value[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15253705733967416331ull);
    }
    vlSelf->__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head = 0;
    vlSelf->__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v0 = 0;
    vlSelf->__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v0 = 0;
    vlSelf->__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__value__v31 = 0;
    vlSelf->__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__value__v31 = 0;
    vlSelf->__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v31 = 0;
    vlSelf->__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 = 0;
    vlSelf->__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 = 0;
    vlSelf->__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
