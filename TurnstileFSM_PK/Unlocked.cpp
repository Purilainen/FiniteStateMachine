#include "Unlocked.h"
#include "TurnstileFSM.h"
#include "Locked.h"
// COPIRAIT PYRY KOSOLA
// TTV14SP
void Unlocked::Coin()
{
    m_FSM->GetGate()->ThankYou();
}

void Unlocked::Pass()
{
    m_FSM->GetGate()->Lock();
    m_FSM->SetState(new Locked(m_FSM));
}

