// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreorder_buffer_tb__pch.h"

//============================================================
// Constructors

Vreorder_buffer_tb::Vreorder_buffer_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreorder_buffer_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreorder_buffer_tb::Vreorder_buffer_tb(const char* _vcname__)
    : Vreorder_buffer_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreorder_buffer_tb::~Vreorder_buffer_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreorder_buffer_tb___024root___eval_debug_assertions(Vreorder_buffer_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vreorder_buffer_tb___024root___eval_static(Vreorder_buffer_tb___024root* vlSelf);
void Vreorder_buffer_tb___024root___eval_initial(Vreorder_buffer_tb___024root* vlSelf);
void Vreorder_buffer_tb___024root___eval_settle(Vreorder_buffer_tb___024root* vlSelf);
void Vreorder_buffer_tb___024root___eval(Vreorder_buffer_tb___024root* vlSelf);

void Vreorder_buffer_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreorder_buffer_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreorder_buffer_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreorder_buffer_tb___024root___eval_static(&(vlSymsp->TOP));
        Vreorder_buffer_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vreorder_buffer_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreorder_buffer_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vreorder_buffer_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vreorder_buffer_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vreorder_buffer_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreorder_buffer_tb___024root___eval_final(Vreorder_buffer_tb___024root* vlSelf);

VL_ATTR_COLD void Vreorder_buffer_tb::final() {
    Vreorder_buffer_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreorder_buffer_tb::hierName() const { return vlSymsp->name(); }
const char* Vreorder_buffer_tb::modelName() const { return "Vreorder_buffer_tb"; }
unsigned Vreorder_buffer_tb::threads() const { return 1; }
void Vreorder_buffer_tb::prepareClone() const { contextp()->prepareClone(); }
void Vreorder_buffer_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
