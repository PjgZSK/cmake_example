#include <iostream>

extern "C"
{
    int Add(int a, int b)
    {
        std::cout << "call LibA::Add" << std::endl;
        return a + b;
    }
}