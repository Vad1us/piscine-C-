//
// Created by Vadym RADCHENKO on 10/3/18.
//

#include "Fixed.class.hpp"

Fixed::~Fixed() {
	//std::cout << "Destructor called\n";
}

Fixed::Fixed() {
	//std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(int const i) {
	//std::cout << "Int constructor called\n";
	this->setRawBits(i << _bits);
}

Fixed::Fixed(float const i) {
	//std::cout << "Float constructor called\n";
	this->setRawBits(roundf(i * (float)(1 << _bits)));
}

Fixed::Fixed(Fixed const & f) {
	//std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed& Fixed::operator=(Fixed const &f) {
	//std::cout << "Assignation operator called\n";
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

bool Fixed::operator>(Fixed const & f) const {
	return (this->toFloat() > f.toFloat());
}

bool Fixed::operator<(Fixed const & f) const {
	return (this->toFloat() < f.toFloat());
}

bool Fixed::operator>=(Fixed const & f) const {
	return (this->toFloat() >= f.toFloat());
}

bool Fixed::operator<=(Fixed const & f) const {
	return (this->toFloat() <= f.toFloat());
}

bool Fixed::operator==(Fixed const & f) const {
	return (this->toFloat() == f.toFloat());
}

bool Fixed::operator!=(Fixed const & f) const {
	return (this->toFloat() != f.toFloat());
}

Fixed Fixed::operator+(Fixed const & f) {
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(Fixed const & f) {
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(Fixed const & f) {
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(Fixed const & f) {
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed &Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed f2 = *this;

	this->setRawBits(this->getRawBits() + 1);
	return (f2);
}

Fixed &Fixed::operator--() {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed f2 = *this;

	this->setRawBits(this->getRawBits() - 1);
	return (f2);
}

Fixed const & Fixed::min(Fixed const &f, Fixed const &f2) {
	if (f > f2)
		return (f2);
	return (f);
}

Fixed const & Fixed::max(Fixed const &f, Fixed const &f2) {
	if (f > f2)
		return (f);
	return (f2);
}

Fixed & Fixed::min(Fixed &f, Fixed &f2) {
	if (f > f2)
		return (f2);
	return (f);
}

Fixed & Fixed::max(Fixed &f, Fixed &f2) {
	if (f > f2)
		return (f);
	return (f2);
}

std::ostream &operator<<(std::ostream &o, Fixed const &f) {
	o << f.toFloat();
	return (o);
}