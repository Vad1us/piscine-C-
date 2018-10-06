//
// Created by Vadym RADCHENKO on 10/3/18.
//

#include "Fixed.class.hpp"

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(int const i) {
	std::cout << "Int constructor called\n";
	this->setRawBits(i << _bits);
}

Fixed::Fixed(float const i) {
	std::cout << "Float constructor called\n";
	this->setRawBits(roundf(i * (float)(1 << _bits)));
}

Fixed::Fixed(Fixed const & f) {
	std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed& Fixed::operator=(Fixed const &f) {
	std::cout << "Assignation operator called\n";
	this->_value = f.getRawBits();
	return *this;
}

int Fixed::getRawBits() const{
	//std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
	return ((float)getRawBits() / (float)(1 << _bits));
}

int Fixed::toInt( void ) const {
	return (getRawBits() >> _bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & f) {
	o << f.toFloat();
	return (o);
}

