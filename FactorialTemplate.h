// FactorialTemplate.h
#ifndef __FinancialSamples__FactorialTemplate__
#define __FinancialSamples__FactorialTemplate__

template <long N>

class Factorial
{
  public:
    enum
    {
      result = Factorial<N-1>::result * N
    };
  private:
};

template <>
class Factorial<0>
{
  public:
    enum
    {
      result = 1
    };
};

template <int N, int P>
class ChoiceNumber
{
  public:
    enum
    {
      result = Factorial<N>::result / (Factorial<P>::result * Factorial<N-P>::result)
    };
};

void showFactorial();

#endif /* defined(__FinancialSamples__FactorialTemplate__) */
