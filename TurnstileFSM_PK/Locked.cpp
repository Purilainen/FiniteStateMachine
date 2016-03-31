#include "Locked.h"
#include "TurnstileFSM.h"
#include "Unlocked.h"
#include "Violation.h"
// COPIRAIT PYRY KOSOLA
// TTV14SP
void Locked::Coin()
{
    m_FSM->GetGate()->Unlock();
    m_FSM->SetState(new Unlocked(m_FSM));
}

void Locked::Pass()
{
    m_FSM->GetGate()->Alarm();
    m_FSM->SetState(new Violation(m_FSM));
}
