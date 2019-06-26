//
// Created by Vadym RADCHENKO on 10/9/18.
//

#include "Intern.hpp"

Intern::Intern() {

}

/* Copy constructor */
Intern::Intern(Intern const &src) {
	*this = src;
	return;
}

/* Default destructor */
Intern::~Intern() {

}

/* Assignment operator overload (Update) */
Intern &Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return *this;
}

/* Default constructor */
Intern::InvalidFormName::InvalidFormName() {

}

/* Copy constructor */
Intern::InvalidFormName::InvalidFormName(Intern::InvalidFormName const &src) {
	*this = src;
}

/* Default destructor */
Intern::InvalidFormName::~InvalidFormName() throw()  {

}

/* Assignment operator overload (Update) */
Intern::InvalidFormName &Intern::InvalidFormName::operator=(Intern::InvalidFormName const &src) {
	/* this->data = rhs.data */
	(void)src;
	return *this;
}

const char* Intern::InvalidFormName::what() const throw() {
	return("Invalid Form Type!\n");
}

Form* Intern::makeForm(std::string const &FormName, std::string const &target) {
	if (FormName != "presidential pardon" && FormName != "shrubbery creation" && FormName != "robotomy request")
		throw InvalidFormName();
	Form *tmp = NULL;
	if (FormName == "presidential pardon")
		tmp = new PresidentialPardonForm(target);
	else if (FormName == "shrubbery creation")
		tmp = new ShrubberyCreationForm(target);
	else if (FormName == "robotomy request")
		tmp = new RobotomyRequestForm(target);
	return (tmp);

}

