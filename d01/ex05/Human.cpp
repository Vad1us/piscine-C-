#include "Human.hpp"

Human::Human() {
	
}

Human::~Human() {
	
}

std::string	Human::identify() const {
	return(this->_br.identify());
}

Brain Human::getBrain() const {
	return(this->_br);
}