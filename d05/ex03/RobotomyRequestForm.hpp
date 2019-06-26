//
// Created by Vadym RADCHENKO on 10/9/18.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string		_target;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm(std::string target);

	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

	void		task() const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
