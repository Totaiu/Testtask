// PrMd1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string str;
    char ch;
    std::cout << "write string: ";
    getline(std::cin, str);
    std::cout << "write the char by which the string will be divided:  ";
    std::cin >> ch;

    for(int i = 0; i < str.length(); i++) 
    {
        if(str[i] == ch) 
        {
            std::cout << str[i] << std::endl;
        }
        else 
        {
            std::cout << str[i];
        }
    }
    return 0;
}

