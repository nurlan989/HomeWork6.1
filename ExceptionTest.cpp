#include "ExceptionTest.h"
#include <iostream>

void UsefulException::FunctionWithException(const std::vector<int>& vec)
{
   if (vec.size() > 1000)
   {
      throw UsefulException("bad_allocate");
   }
}


void UsefulException::Function(int a, int b)
{
   a > b ? throw UsefulException("more") :a < b ? throw UsefulException("less") : throw UsefulException("equal");
}

unsigned long UsefulException::FindFactorial(int n)
{
   if (n < 0)
   {
      throw UsefulException("factorial is only defined for positive integers");
   }
   unsigned long factorialNumber{ 1 };
   for (int i = 1; i <= n; ++i)
   {
      factorialNumber *= i;
   }
   return factorialNumber;
}
