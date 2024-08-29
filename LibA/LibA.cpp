#include <iostream>
#include <stdio.h>

extern "C"
{
    int Add_A(int a, int b)
    {
        char buffer[100];
        sprintf_s(buffer, 100, "call LibA::Add_A : %d + %d = %d", a, b, a + b);
        std::cout << buffer << std::endl;
        return a + b;
    }
}