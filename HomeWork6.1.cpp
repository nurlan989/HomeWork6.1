#include <iostream>
#include <algorithm>


#include "SimpleExample.h"
#include "CountNumberPattern.h"
#include "WorkWithVector.h"
#include "ExceptionTest.h"


int main()
{
	 std::vector<std::string>my_Vec{"my","pattern","lambda", "pattern", "is", "pattern", "work", "pattern", "maybe"};
	 
	 std::cout << CountNumberPattern(my_Vec) << std::endl;
	
	 system("pause");
	 system("cls");
//==========================================================================================================
	  
	 std::vector<int> myvec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   WorkWithVector<int> command(myvec);

   auto squared = command.Square([](int value) { return value * value; });

   for_each(squared.begin(), squared.end(), [](int element)
      {
         std::cout << element << " ";
      });

   std::cout << std::endl;

   auto found = command.Compare([](int a, int b) { return a + b > 7; });
   
   if (found)
   {
      std::cout << "found" << std::endl;
   }
   else
   {
      std::cout << "not found" << std::endl;
   }

	system("pause");
	system("cls");
  
//======================================================================================================================
  
   Storage key{};

   Function function{};
   
   function.UseFunction([](Storage& data)
      {
         data.AddData("4.23.13.1");
      });

   function.AddFunction(key);

   key.Print();

  function.UseFunction([](Storage& data)
      {
         data.ChangeData();
      });

   function.AddFunction(key);

   key.Print();

	system("pause");
	system("cls");
  
//======================================================================================================================

	UsefulException example{};

	std::vector<int> m_vec{};
	m_vec.resize(1001);

	try
	{
		example.FunctionWithException(m_vec);
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
//==============================================================================

	try
	{
		example.Function(11, 11);
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
//===============================================================================

	try
	{
		example.FindFactorial(-1);
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

//===============================================================================
}




