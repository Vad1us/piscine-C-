//
// Created by Vadym RADCHENKO on 10/3/18.
//

#include "Fixed.class.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->_i = 0;
}

Fixed::Fixed(Fixed const & f) {
	std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed::~Fixed() {
	std::cout << "Default destructor called\n";
}

Fixed& Fixed::operator=(Fixed const &f) {
	std::cout << "Assignation operator called\n";
	this->_i = f.getRawBits();
	return *this;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called\n";
	return (this->_i);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "Copy constructor called";
	this->_i = raw;
}