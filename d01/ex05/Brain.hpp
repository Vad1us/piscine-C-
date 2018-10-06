#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
public:
	std::string	identify() const;
	Brain();
	~Brain();
private:
	std::string _addr;
};

#endif