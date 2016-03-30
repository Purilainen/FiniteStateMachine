#include "TurnstileFSM.h"


TurnstileFSM::TurnstileFSM(TurnstileGate* gate)
    : m_gate(gate), m_currentstate(0)
{
}
TurnstileFSM::~TurnstileFSM()
{
}

void TurnstileFSM::SetState(TurnstileStates* ts)
{
    m_currentstate = ts;
}
