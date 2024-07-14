#pragma once

#include <boost/beast.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <string>

namespace Networking
{
	class Client
	{
	public:
		Client();
		Client(std::string url);
		Client(std::string url, std::string args);
		~Client();

		static std::string getResponse(std::string url = NULL, std::string args = NULL);
	private:
		std::string MAIN_URL;
		std::string URL_ARGUMENTS;
	};
}

Networking::Client::Client(): MAIN_URL(""), URL_ARGUMENTS("")
{
}

Networking::Client::Client(std::string url) : MAIN_URL(url), URL_ARGUMENTS("")
{
}

Networking::Client::Client(std::string url, std::string args) : MAIN_URL(url), URL_ARGUMENTS(args)
{
}


Networking::Client::~Client()
{
}