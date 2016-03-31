#include "TurnstileFSM.h"
#include <Windows.h>

// COPIRAIT PYRY KOSOLA
// TTV14SP

int main()
{
    std::cout << " (1) INSERT COIN, (2) PASS, (3) RESET, (4) READY" << std::endl;
    TurnstileGate* gate = new TurnstileGate();
    TurnstileFSM fsm(gate);
    
    for (;;)
    {

        if (GetAsyncKeyState(0x31))
        {
            system("cls");
            std::cout << " (1) INSERT COIN, (2) PASS, (3) RESET, (4) READY" << std::endl;
            fsm.Coin();
            Sleep(200);
        }
        else if (GetAsyncKeyState(0x32))
        {
            system("cls");
            std::cout << " (1) INSERT COIN, (2) PASS, (3) RESET, (4) READY" << std::endl;
            fsm.Pass();
            Sleep(200);
        }
        else if (GetAsyncKeyState(0x33))
        {
            system("cls");
            std::cout << " (1) INSERT COIN, (2) PASS, (3) RESET, (4) READY" << std::endl;
            fsm.Reset();
            Sleep(200);
        }
        else if (GetAsyncKeyState(0x34))
        {
            system("cls");
            std::cout << " (1) INSERT COIN, (2) PASS, (3) RESET, (4) READY" << std::endl;
            fsm.Ready();
            Sleep(200);
        }
        else if (GetAsyncKeyState(VK_ESCAPE))
        {
            return 0;
        }

    }
}