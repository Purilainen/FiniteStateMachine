#include "TurnstileFSM.h"
#include "Locked.h"
// COPIRAIT PYRY KOSOLA
// TTV14SP
TurnstileFSM::TurnstileFSM(TurnstileGate* gate)
    : m_gate(gate), m_currentstate(0)
{
    SetState(new Locked(this));
}
TurnstileFSM::~TurnstileFSM()
{
}

void TurnstileFSM::Coin()
{
    m_currentstate->Coin();
}

void TurnstileFSM::Pass()
{
    m_currentstate->Pass();
}


void TurnstileFSM::Reset()
{
    m_currentstate->Reset();
}

void TurnstileFSM::Ready()
{
    m_currentstate->Ready();
}

void TurnstileFSM::SetState(TurnstileStates* ts)
{
    m_currentstate = ts;
}
