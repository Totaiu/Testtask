// PrMd4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iterator>
#include <fstream>
#include <iostream>

int main()
{
	std::ifstream in;
	in.open("input.txt");
	std::ofstream on;
	std::string str((std::istreambuf_iterator<char>(in)),
					std::istreambuf_iterator<char>());
	str.c_str();

	for(int i = 0; i < str.length(); i++) 
	{
		if(isdigit(str[i])) 
		{
			str.erase(i, 1);
			i--;
		}
		if(isspace(str[i])) 
		{
			str.erase(i, 1);
			i--;
		}
	}
	std::cout << "digits and spaces erased\n";
	in.close();
	on.open("input.txt");
	on << str;
	on.close();

	return 0;

}

