//
// Created by Vadym RADCHENKO on 10/9/18.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
#include "Form.hpp"

class PresidentialPardonForm : public Form{

private:
	std::string				_target;
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm(std::string target);

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);

	void		task() const;
};


#endif //EX02_PRESIDENTIALPARDONPresidentialPardonForm_HPP
