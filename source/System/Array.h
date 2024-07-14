#pragma once

#include <string>
#include <vector>

namespace System
{
	template<typename T>
	class Array
	{
	public:

		/* This method to separate the string by a separator */
		static std::vector<T> explode(std::string str, char separator);
	private:
	};
}

/* This method to separate the string by a separator */
template<typename T>
std::vector<T> System::Array<T>::explode(std::string str, char separator)
{
    std::vector<T> result;
    std::string tempVal = "";
    for (char elem : str)
    {
        if (elem == separator)
        {
            result.emplace_back(tempVal);
            tempVal = "";
        }
        else tempVal.append(1, elem);
    }

    /* If in tempVal remain value, then add to result and clear */
    if (!tempVal.empty()) result.emplace_back(tempVal);

    return result;
}
