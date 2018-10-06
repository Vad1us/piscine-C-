#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
	std::cout << std::endl << "First name:      ";
	std::cin >> this->firstn;
	std::cout  << "Last name:       ";
	std::cin >> this->lastn;
	std::cout  << "Nickname:        ";
	std::cin >> this->nickn;
	std::cout  << "Login:           ";
	std::cin >> this->login;
	std::cout  << "Postal address:  ";
	std::cin >> this->postaladdr;
	std::cout  << "Email:           ";
	std::cin >> this->email;
	std::cout  << "Phone number:    ";
	std::cin >> this->phonen;
	std::cout  << "Birthday date:   ";
	std::cin >> this->birthday;
	std::cout  << "Favorite meal:   ";
	std::cin >> this->meal;
	std::cout  << "Underwaer color: ";
	std::cin >> this->color;
	std::cout  << "Darket secret:   ";
	std::cin >> this->secret;
}

Contact::~Contact() {
}
