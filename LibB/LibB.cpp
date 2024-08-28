#include <iostream>
#include <stdio.h>

extern "C" {
int Add_B(int a, int b) {
  char buffer[100];
  sprintf_s(buffer, 100, "call LibB::Add_B : %d + %d = %d", a, b, a + b);
  std::cout << buffer << std::endl;
  return a + b;
}
}