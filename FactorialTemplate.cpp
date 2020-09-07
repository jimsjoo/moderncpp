// FactorialTemplate.cpp
#include "FactorialTemplate.h"
#include <iostream>

void showFactorial()
{
  std::cout << " Some factorial values: " << std::endl;
  std::cout << "fact(5)= " << Factorial<5>::result << std::endl;
  std::cout << "fact(7)= " << Factorial<7>::result << std::endl;
  std::cout << "fact(9)= " << Factorial<9>::result << std::endl;
}

