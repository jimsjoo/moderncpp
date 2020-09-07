#include "FactorialTemplate.h"
#include <iostream>

int main(int argc, const char **argv)
{
  std::cout << "factorial(6) = " << Factorial<6>::result;
  std::cout << "\n choiceNumber(5,6) = " << ChoiceNumber<6,2>::result <<std::endl;
  showFactorial();
  return 0;
}
