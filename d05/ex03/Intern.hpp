//
// Created by Vadym RADCHENKO on 10/9/18.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include <exception>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern {
public:
	/* Canonical Form */
	Intern();

	Intern(Intern const &src);

	~Intern();

	Intern &operator=(Intern const &rhs);

	Form* makeForm(std::string const &FormName, std::string const &target);

	class InvalidFormName : public virtual std::exception {
	public:
		InvalidFormName();
		InvalidFormName(InvalidFormName const &src);
		~InvalidFormName() throw();

		InvalidFormName &operator=(InvalidFormName const &src);

		virtual const char * what () const throw ();
	};

};


#endif //EX03_INTERN_HPP