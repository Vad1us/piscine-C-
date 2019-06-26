//
// Created by Vadym RADCHENKO on 10/9/18.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45) {
	this->_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)  {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	(void)src;
	return (*this);
}

void RobotomyRequestForm::task() const {
	if (rand() % 2 == 1) {
		std::cout << "*drilling noise*\n";
	} else {
		std::cout << "<" << this->_target << "> has been robotomized\n";
	}
}