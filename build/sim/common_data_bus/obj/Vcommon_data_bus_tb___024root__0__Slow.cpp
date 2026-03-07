// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon_data_bus_tb.h for the primary calling header

#include "Vcommon_data_bus_tb__pch.h"

void Vcommon_data_bus_tb___024root___timing_ready(Vcommon_data_bus_tb___024root* vlSelf);

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___eval_static(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_static\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10433768528121460232ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16556131151024034381ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15767052373889279605ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1414928381546153436ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16606093097028484779ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7216609183238779751ull);
    vlSelfRef.__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0 
        = vlSelfRef.common_data_bus_tb__DOT__clk;
    Vcommon_data_bus_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___eval_static__TOP(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_static__TOP\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__pending_now = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10433768528121460232ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__after_grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16556131151024034381ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__grant_and_advance__DOT__granted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15767052373889279605ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__pending_now = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1414928381546153436ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__after_grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16606093097028484779ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__grant_and_advance__DOT__granted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7216609183238779751ull);
}

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___eval_final(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_final\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcommon_data_bus_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcommon_data_bus_tb___024root___eval_phase__stl(Vcommon_data_bus_tb___024root* vlSelf);

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___eval_settle(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_settle\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcommon_data_bus_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/common_data_bus_tb.sv", 12, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcommon_data_bus_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___eval_triggers_vec__stl(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_triggers_vec__stl\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vcommon_data_bus_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcommon_data_bus_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcommon_data_bus_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcommon_data_bus_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*7:0*/, 8> Vcommon_data_bus_tb__ConstPool__TABLE_hf9555510_0;

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___stl_sequent__TOP__0(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___stl_sequent__TOP__0\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    __Vtableidx1 = vlSelfRef.common_data_bus_tb__DOT___DUT___DOT__selected0;
    vlSelfRef.common_data_bus_tb__DOT__granted_request_cdb0 
        = Vcommon_data_bus_tb__ConstPool__TABLE_hf9555510_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___eval_stl(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_stl\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcommon_data_bus_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vcommon_data_bus_tb___024root___eval_phase__stl(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___eval_phase__stl\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcommon_data_bus_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcommon_data_bus_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcommon_data_bus_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcommon_data_bus_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcommon_data_bus_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcommon_data_bus_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcommon_data_bus_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge common_data_bus_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge common_data_bus_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcommon_data_bus_tb___024root___ctor_var_reset(Vcommon_data_bus_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon_data_bus_tb___024root___ctor_var_reset\n"); );
    Vcommon_data_bus_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->common_data_bus_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5302738642749083659ull);
    vlSelf->common_data_bus_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5460624253511742358ull);
    vlSelf->common_data_bus_tb__DOT__write_requests = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18223805625903170216ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->common_data_bus_tb__DOT__data_in[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15196168495491640517ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->common_data_bus_tb__DOT__rob_adrs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4818456019598187563ull);
    }
    vlSelf->common_data_bus_tb__DOT__granted_request_cdb0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14672192042342801551ull);
    vlSelf->common_data_bus_tb__DOT__rob_write_cdb0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 680395079660868377ull);
    vlSelf->common_data_bus_tb__DOT__rob_write_cdb1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11900594736027953171ull);
    vlSelf->common_data_bus_tb__DOT__rob_address_cdb0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4071652223174228545ull);
    vlSelf->common_data_bus_tb__DOT__rob_address_cdb1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8484087934070925261ull);
    vlSelf->common_data_bus_tb__DOT__data_out_cdb0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2450755529930022638ull);
    vlSelf->common_data_bus_tb__DOT__data_out_cdb1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4480222343616396670ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT__selected0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1100778639413790092ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT__selected1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4387309670767781327ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__counter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9329337078395345803ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR0___DOT__write_pendencies = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3147433084772320416ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__counter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11063879195700626825ull);
    vlSelf->common_data_bus_tb__DOT___DUT___DOT___ABR1___DOT__write_pendencies = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8555114980755781258ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__common_data_bus_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
