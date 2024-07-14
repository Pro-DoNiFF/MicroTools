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

		static std::string sendRequest(std::string url, std::string args = "");
	private:
	};
}
