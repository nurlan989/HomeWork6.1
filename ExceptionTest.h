#pragma once

#include <exception>
#include <string>
#include <vector>




class UsefulException : public std::exception
{
public:
	UsefulException() {};
	UsefulException(const std::string& message)
		: std::exception(message.c_str()) {};

	void FunctionWithException(const std::vector<int>& vec);

	void Function(int a, int b);

	unsigned long FindFactorial(int n);
};

