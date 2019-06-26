//
// Created by Vadym RADCHENKO on 10/10/18.
//

#include "Magic.hpp"

/* Default constructor */
Magic::Magic() {

}

/* Copy constructor */
Magic::Magic(Magic const &src) {
	*this = src;
	return;
}

/* Default destructor */
Magic::~Magic() {

}

/* Assignment operator overload (Update) */
Magic &Magic::operator=(Magic const &rhs) {
	(void)rhs;
	return *this;
}

void Magic::doit(std::string str) {
	chr(str);
	intgr(str);
	flt(str);
	dbl(str);
}

void Magic::chr(std::string str) {
	try {
		this->_chr = static_cast<char>(std::stoi(str));
		if (this->_chr > 31 && this->_chr < 127)
			std::cout << "char: '" << this->_chr << "'\n";
		else
			std::cout << "char: Non displayable\n";
	}
	catch (std::exception &e) {
		std::cout << "char: impossible\n";
	}
}

void Magic::intgr(std::string str) {
	try {
		this->_intgr = static_cast<int>(std::stoi(str));
		std::cout << "int: " << this->_intgr << "\n";
	}
	catch (std::exception &e) {
		std::cout << "int: impossible\n";
	}
}

void Magic::dbl(std::string str) {
	try {
		int len = Magic::len(str);
		if (len > 15)
			len = 15;
		this->_dbl = static_cast<double>(std::stod(str));
		std::cout << "double: " << std::fixed << std::setprecision(len) << this->_dbl << "\n";
	}
	catch (std::exception &e) {
		std::cout << "double: impossible\n";
	}
}

void Magic::flt(std::string str) {
	try {
		int len = Magic::len(str);
		if (len > 8)
			len = 8;
		this->_flt = static_cast<float>(std::stoi(str));
		std::cout << "float: " << std::fixed << std::setprecision(len) << this->_flt << "f\n";
	}
	catch (std::exception &e) {
		std::cout << "float: nanf\n";
	}
}

int Magic::len(std::string str) {
	int len = 0;
	int i = 0;
	while(str[i]) {
		if (str[i] == '.') {
			while (str[i]) {
				len++;
				i++;
			}
			return (len);
		}
		i++;
	}
	return (1);
}