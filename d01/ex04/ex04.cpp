#include <iostream>

int main()
{
	std::string		str = "HI THIS IS BRAIN";
	
	std::string		*str2;
	str2 = &str;

	std::string		&str3 = str;
	std::cout << str2 << "\n" << str3 << "\n";
	return (0);
}