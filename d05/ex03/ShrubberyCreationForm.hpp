//
// Created by Vadym RADCHENKO on 10/9/18.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <exception>
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form {
private:
	std::string		_target;
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &src);

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

	ShrubberyCreationForm(std::string target);
	void		task() const;
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
