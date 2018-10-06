#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human {
public:
	Brain getBrain() const;
	std::string	identify() const;
	Human();
	~Human();
private:
	Brain const _br;
};

#endif