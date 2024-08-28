typedef int (*add_func)(int, int);

#include <Windows.h>
void TestLibA()
{
    auto sharedLib = LoadLibrary("../LibA/a");
    add_func aAddFunc = (add_func)GetProcAddress(sharedLib, "Add_A");
    aAddFunc(1234, 234);   
}

void TestLibB()
{
    auto sharedLib = LoadLibrary("../LibB/b");
    add_func aAddFunc = (add_func)GetProcAddress(sharedLib, "Add_B");
    aAddFunc(3434, 129);   
}