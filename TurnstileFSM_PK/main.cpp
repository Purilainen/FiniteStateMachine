#include "TurnstileFSM.h"


int main()
{
   
    TurnstileGate* gate = new TurnstileGate();
    TurnstileFSM fsm(gate);

    return 0;
}