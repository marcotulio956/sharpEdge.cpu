// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbranch_predictor_tb__pch.h"

//============================================================
// Constructors

Vbranch_predictor_tb::Vbranch_predictor_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbranch_predictor_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbranch_predictor_tb::Vbranch_predictor_tb(const char* _vcname__)
    : Vbranch_predictor_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbranch_predictor_tb::~Vbranch_predictor_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbranch_predictor_tb___024root___eval_debug_assertions(Vbranch_predictor_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vbranch_predictor_tb___024root___eval_static(Vbranch_predictor_tb___024root* vlSelf);
void Vbranch_predictor_tb___024root___eval_initial(Vbranch_predictor_tb___024root* vlSelf);
void Vbranch_predictor_tb___024root___eval_settle(Vbranch_predictor_tb___024root* vlSelf);
void Vbranch_predictor_tb___024root___eval(Vbranch_predictor_tb___024root* vlSelf);

void Vbranch_predictor_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbranch_predictor_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbranch_predictor_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbranch_predictor_tb___024root___eval_static(&(vlSymsp->TOP));
        Vbranch_predictor_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vbranch_predictor_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbranch_predictor_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbranch_predictor_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vbranch_predictor_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vbranch_predictor_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbranch_predictor_tb___024root___eval_final(Vbranch_predictor_tb___024root* vlSelf);

VL_ATTR_COLD void Vbranch_predictor_tb::final() {
    Vbranch_predictor_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbranch_predictor_tb::hierName() const { return vlSymsp->name(); }
const char* Vbranch_predictor_tb::modelName() const { return "Vbranch_predictor_tb"; }
unsigned Vbranch_predictor_tb::threads() const { return 1; }
void Vbranch_predictor_tb::prepareClone() const { contextp()->prepareClone(); }
void Vbranch_predictor_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
