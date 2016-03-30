#include "Violation.h"
#include "TurnstileFSM.h"
#include "Locked.h"

void Violation::Coin()
{
    std::cout << "VIOLATION: Please contact administrator before proceeding." << std::endl;
}

void Violation::Pass()
{
    std::cout << "VIOLATION: Cannot pass while in violation state." << std::endl;
}

void Violation::Reset()
{
    m_FSM->GetGate()->ResetAlarm();
}

void Violation::Ready()
{
    m_FSM->GetGate()->ResetAlarm();
    m_FSM->SetState(new Locked(m_FSM));
}
