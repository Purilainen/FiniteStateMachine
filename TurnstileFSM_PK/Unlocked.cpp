#include "Unlocked.h"
#include "TurnstileFSM.h"

void Unlocked::Coin()
{
    m_FSM->GetGate()->ThankYou();
}

void Unlocked::Pass()
{
    m_FSM->GetGate()->Lock();
}

