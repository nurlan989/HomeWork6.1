#include "SimpleExample.h"

#include <cstdlib>

void Storage::AddData(const std::string& ip)
{
	m_ip += ip;
	m_vec.push_back(m_ip);
}

void Storage::ChangeData()
{
	m_vec = {};

	srand( time(0) );
	std::string firstRandom = std::to_string(1 + std::rand() % 9) + ".";
	std::string secondRandom = std::to_string(11 + std::rand() % 20) + ".";
	std::string thirdRandom = std::to_string(45 + std::rand() % 100) + ".";
	std::string forthRandom = std::to_string(122+ std::rand() % 200);
	m_ip = firstRandom + secondRandom + thirdRandom + forthRandom;
	m_vec.push_back(m_ip);
}

void Storage::Print()
{
	std::cout << "Data: ";
	for (const auto& element : m_vec)
	{
		std::cout << element << " ";
	}
	std::cout << std::endl;
}

void Function::AddFunction(Storage& data)
{
	for (const auto& element : m_list)
	{
		element(data);
	}
}

void Function::UseFunction(std::function<void(Storage&)> function)
{
	m_list.push_back(function);	
}
