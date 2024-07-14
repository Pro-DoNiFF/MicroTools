#include "JSON.h"

std::string System::JSON::getField(std::string json, std::string field)
{
	std::stringstream jsonEncoded(json);
	boost::property_tree::ptree root;
	boost::property_tree::read_json(jsonEncoded, root);

	if (root.empty()) return std::string();

	return root.get<std::string>(field);
}
