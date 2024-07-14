#include "Client.h"

namespace http = boost::beast::http;

std::string Networking::Client::sendRequest(std::string url, std::string args)
{
	boost::asio::io_context io;
	boost::asio::ip::tcp::resolver resolver(io);
	boost::asio::ip::tcp::socket socket(io);
	
	boost::asio::connect(socket, resolver.resolve(url, "80"));

	http::request<http::string_body> req(http::verb::get, args, 11);

	req.set(http::field::host, url);
	req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);

	http::write(socket, req);

	std::string response;
	{
		boost::beast::flat_buffer buffer;
		http::response<http::dynamic_body> res;
		http::read(socket, buffer, res);
		response = boost::beast::buffers_to_string(res.body().data());
	}

	socket.shutdown(boost::asio::ip::tcp::socket::shutdown_both);
	return response;
}