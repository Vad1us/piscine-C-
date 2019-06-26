#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main() {
	srand(time(NULL));
	Bureaucrat			bur("Antonio", 10);
	ShrubberyCreationForm a("tree");
	RobotomyRequestForm b("yellow");
	PresidentialPardonForm c("gg");
	try {
		bur.signForm(a);
		bur.execute(a);
		bur.signForm(b);
		bur.execute(b);
		bur.signForm(c);
		bur.execute(c);
	}
	catch  (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}
 	std::cout << "\n\n";
	try {
		Intern i;
		Form *f2 = i.makeForm("shrubbery creation", "invalid");
		bur.signForm(*f2);
		bur.execute(*f2);
		Form *f = i.makeForm("aaa", "invalid");
		bur.signForm(*f);
		bur.execute(*f);
	}
	catch  (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Intern::InvalidFormName &e) {
		std::cout << e.what() << "\n";
	}

}