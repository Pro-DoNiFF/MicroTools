#include <iostream>
#include "System/Array.h"
#include "System/JSON.h"
#include "Networking/Client.h"

using SArray = System::Array<std::string>;

int main(int argc, char** argv)
{
    std::string res = Networking::Client::sendRequest("ip-api.com", "/json/www.google.com");
    std::string json = System::JSON::getField(res, "as");
    /*std::string res = "https://ip-api.com";
    if (res.find("http") != std::string::npos)
    {
        std::cout << "Found: " << res.find("http") << std::endl;
    }
    else {
        std::cout << "Not found" << std::endl;
    }*/
    
    std::cout << json << std::endl;
    

    return 0;
}