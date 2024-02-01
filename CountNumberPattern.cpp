#include "CountNumberPattern.h"


int CountNumberPattern(const std::vector<std::string>& Vec)
{
   std::cout << "Enter your pattern: ";
   std::string pattern{};
   std::cin >> pattern;
   int count{};

   auto countFunc = [&pattern, &count](const std::vector<std::string>& vec) 
      {
         for (int i = 0; i < vec.size() - 1; ++i)
         {
            if (pattern == vec[i])
            {
               ++count;
            }
         }
         return count;
      };
   return countFunc(Vec);
}