#include <iostream>
#include "Contact.class.hpp"
#include <stdlib.h>

void	ft_print_par(std::string str)
{
	int k;

	if (str.length() > 10)
	{
		k = 0;
		while (k < 9)
		{
			putchar(str[k]);
			k++;
		}
		putchar('.');
		std::cout << "|";
	}
	else
	{
		std::cout.width(10);
		std::cout << str;
		std::cout.width(1);
		std::cout << "|";
	}
}

int	ft_check_index(char *tmp, int index)
{
	int k;

	k = 0;
	while (tmp[k])
	{
		if (isdigit(tmp[k]) == 0)
			return (0);
		k++;
	}
	k = atoi(tmp);
	if (k < 1 || k > index)
		return (0);
	return (k);
}

int main()
{
	int			index;
	int 		index2;
	std::string	buf;
	char* tmp = new char[100];
	Contact*	list[8];
	int 		k;
	
	index = 0;
	while(1)
	{
		std::cout << "Enter command: ";
		std::cin >> buf;
		if (std::cin.eof())
		{
			std::cout << std::endl << "Standard input is closed. Bye-bye." << std::endl;
			return (1);
		}
		if(buf.compare("EXIT") == 0)
			exit(1);
		if (buf.compare("ADD") == 0)
		{
			if (index == 8)
				std::cout << "Sorry, too much contacts." << std::endl;
			else
			{
				std::cout << "Enter new contact information." ;
				list[index] = new Contact;
				list[index]->index = index + 1;
				index++;
				std::cout << "Contact added" << std::endl;
			}
		}
		if (buf.compare("SEARCH") == 0)
		{
			index2 = 0;
			if (index == 0)
			{
				std::cout << "No contact to show." << std::endl;
				continue ;
			}
			else
			{
				std::cout << "|";
				ft_print_par("index");
				ft_print_par("first name");
				ft_print_par("last name");
				ft_print_par("nickname");
				std::cout << std::endl;
				std::cout << "|----------|----------|----------|----------|" << std::endl;
			}
			while (index > index2)
			{
				std::cout << "|";
				std::cout.setf(std::ios::right);
				std::cout.width(10);
				std::cout << list[index2]->index; 
				std::cout.width(1);
				std::cout << "|";
				
				ft_print_par(list[index2]->firstn);
				ft_print_par(list[index2]->lastn);
				ft_print_par(list[index2]->nickn);
				std::cout << std::endl;
				std::cout << "|----------|----------|----------|----------|" << std::endl;
				index2++;
			}
			if (index2 == 0)
			{
				std::cout << "No contact to show." << std::endl;
				continue ;
			}
			while (1)
			{
				std::cout << "Enter index of contact to show." << std::endl;
				std::cin >> tmp;
				if (std::cin.eof())
				{
					std::cout << std::endl << "Standard input is closed. Bye-bye." << std::endl;
					return (1);
				}
				k = ft_check_index(tmp, index);
				if (k == 0)
					std::cout << "Invalid index, try again: ";
				else
				{
					std::cout << std::endl << "First name:      " << list[k-1]->firstn;
					std::cout << std::endl << "Last name:       " << list[k-1]->lastn;
					std::cout << std::endl << "Nickname:        " << list[k-1]->nickn;
					std::cout << std::endl << "Login:           " << list[k-1]->login;
					std::cout << std::endl << "Postal address:  " << list[k-1]->postaladdr;
					std::cout << std::endl << "Email:           " << list[k-1]->email;
					std::cout << std::endl << "Phone number:    " << list[k-1]->phonen;
					std::cout << std::endl << "Birthday date:   " << list[k-1]->birthday;
					std::cout << std::endl << "Favorite meal:   " << list[k-1]->meal;
					std::cout << std::endl << "Underwaer color: " << list[k-1]->color;
					std::cout << std::endl << "Darket secret:   " << list[k-1]->secret << std::endl;
					break ;
				}
			}
		}
	}
	
}