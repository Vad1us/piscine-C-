//
// Created by Vadym RADCHENKO on 10/3/18.
//

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const & f);
	Fixed &		operator=(Fixed const & f);
	int getRawBits() const;
	void setRawBits(int const raw);
private:
	int					_i;
	static int const	stat_i = 8;
};
#endif //EX00_FIXED_CLASS_HPP
