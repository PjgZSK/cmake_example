#include <iostream>

extern "C"
{
    int Add(int a, int b)
    {
        std::cout << "call LibB::Add" << std::endl;
        return a + b;
    }
}