#include "Brain.hpp"

Brain::Brain() {
	std::stringstream stream;
	stream << std::hex << this;
	this->_addr = stream.str();
}

Brain::~Brain() {
	
}

std::string	Brain::identify() const
{
	return (this->_addr);
}
