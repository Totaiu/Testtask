// PrMd3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <string>
#include <iostream>

std::string fport(std::string& str);

int main()
{
    
    std::vector<std::string> urls;
    urls.push_back("http://mytona.com/index.html");
    urls.push_back("https://mytona.com:8080/");
    urls.push_back("mytona.com");
    std::string protocol, host, port, page, t;

    for (std::vector<std::string>::size_type i = 0; i != urls.size(); i++)
    {
        protocol = "", host = "", port = "", page = "";
        size_t found = urls[i].find("http://");
        if (found != std::string::npos)
        {
            protocol = "http";
            found += 7;
        }
        else
        {
            if ((found = urls[i].find("https://")) != std::string::npos)
            {
                protocol = "https";
                found += 8;
            }
            else
            {
                found = 0;
                protocol = "http";
            }
        }

        t = urls[i].substr(found);
        found = t.find("/");
        if(found != std::string::npos) 
        {
            host = t.substr(0, found);
            port = fport(host);
            page = t.substr(found);
        }
        else 
        {
            host = t;
            port = fport(host);
            page = "/";
        }

        std::cout << "Protocol: " << protocol << " Host: " << host << " Port: " << port << " Page: " << page << std::endl;
    }

    return 0;

 
}

std::string fport(std::string &str)
{
    std::string port;
    size_t found = str.find(":");
    if (found != std::string::npos)
    {
        port = str.substr(found);
        str = str.substr(0, found);
    }
    if (port.size() == 0) 
    {
        port = "80";
    }
    return port;
}