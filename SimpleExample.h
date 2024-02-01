#pragma once

#include "WorkWithVector.h"

#include <iostream>

class Storage
{
public:

	void AddData(const std::string& ip);

	void ChangeData();

	void Print();

private:
	std::vector<std::string> m_vec{};
	std::string m_ip{};
};


class Function 
{
public:

	void AddFunction(Storage& data);
	void UseFunction(std::function<void(Storage&) > function);

private:
	std::vector<std::function<void(Storage&)>> m_list{};
};





