#include <iostream>

extern void TestLibA();
extern void TestLibB();

int main()
{
    std::cout << "Hello, CMake" << std::endl;
    TestLibA();
    TestLibB();
    return 0;
}