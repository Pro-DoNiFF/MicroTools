#pragma once

#include <string>
#include <vector>

class Array
{
public:
	Array();
	Array(std::string input);
	~Array();

private:
	std::string inputStr;
	template<typename T>
	std::vector<T> inputVector {};
};

Array::Array(): inputStr("")
{}
Array::Array(std::string input) : inputStr(input)
{}

Array::~Array()
{}