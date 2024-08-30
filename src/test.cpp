#include <Windows.h>
#include <cstdio>
#include <iostream>

typedef int (*add_func)(int, int);

#ifdef DEBUG
const char *compile_flag = "Debug";
#else
const char *compile_flag = "Release";
#endif

void TestLibA()
{
    std::cout << compile_flag << std::endl;
    char path[100];
    snprintf(path, 100, "../../LibA/%s/a", compile_flag);
    auto sharedLib = LoadLibrary(path);
    add_func aAddFunc = (add_func)GetProcAddress(sharedLib, "Add_A");
    aAddFunc(1234, 234);
}

void TestLibB()
{
    std::cout << compile_flag << std::endl;
    char path[100];
    snprintf(path, 100, "../../LibB/%s/b", compile_flag);
    auto sharedLib = LoadLibrary(path);
    add_func aAddFunc = (add_func)GetProcAddress(sharedLib, "Add_B");
    aAddFunc(3434, 129);
}