#pragma once

#include <map>
#include <string>

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

namespace System
{
	class JSON
	{
	public:

		static std::string getField(std::string json, std::string field);
	private:

	};

}