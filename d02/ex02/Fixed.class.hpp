//
// Created by Vadym RADCHENKO on 10/3/18.
//

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	~Fixed();
	Fixed();
	Fixed(int const i);
	Fixed(float const i);
	Fixed(Fixed const & f);
	Fixed &	operator=(Fixed const & f);
	int getRawBits()const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator>(Fixed const & f) const;
	bool operator<(Fixed const & f) const;
	bool operator>=(Fixed const & f) const;
	bool operator<=(Fixed const & f) const;
	bool operator==(Fixed const & f) const;
	bool operator!=(Fixed const & f) const;

	Fixed operator+(Fixed const & f);
	Fixed operator-(Fixed const & f);
	Fixed operator*(Fixed const & f);
	Fixed operator/(Fixed const & f);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	static const Fixed &min(Fixed const &f, Fixed const &f2);
	static const Fixed &max(Fixed const &f, Fixed const &f2);
	static Fixed &min(Fixed &f, Fixed &f2);
	static Fixed &max(Fixed &f, Fixed &f2);
private:
	int					_value;
	static int const	_bits = 8;
};
	std::ostream &operator<<(std::ostream & o, Fixed const &f);

#endif //FIXED_CLASS_HPP
