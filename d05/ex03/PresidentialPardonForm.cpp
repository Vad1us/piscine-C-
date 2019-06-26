//
// Created by Vadym RADCHENKO on 10/9/18.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5) {
	this->_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	(void)src;
	return (*this);
}

void PresidentialPardonForm::task() const {
	std::cout << "<" << this->_target << "> has been pardoned by Zaphod Beeblebrox.\n";
}