#ifndef VIOLATION_H
#define VIOLATION_H
// COPIRAIT PYRY KOSOLA
// TTV14SP
#include "TurnstileStates.h"
#include <iostream>
class TurnstileFSM;
class Violation : public TurnstileStates
{
public:
    void Coin() override;
    void Pass() override;
    void Reset() override;
    void Ready() override;

    Violation(TurnstileFSM* FSM) : TurnstileStates(FSM)
    {
        m_FSM = FSM; 
        std::cout << " You have entered Violation state" << std::endl;
    }
    ~Violation();

private:
    TurnstileFSM* m_FSM;
};

#endif