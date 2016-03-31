#ifndef UNLOCKED_H
#define UNLOCKED_H
// COPIRAIT PYRY KOSOLA
// TTV14SP
#include "TurnstileStates.h"
#include <iostream>

class TurnstileFSM;
class Unlocked : public TurnstileStates
{
public:
    void Coin();
    void Pass();

    Unlocked(TurnstileFSM* FSM) : TurnstileStates(FSM) 
    { 
        m_FSM = FSM;   
        std::cout << " You have entered Unlocked state" << std::endl; 
    }
    ~Unlocked();
private:
    TurnstileFSM* m_FSM;
};



#endif