#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	srand(time(NULL));
	Bureaucrat			bur("Antonio", 10);
	ShrubberyCreationForm a("tree");
	RobotomyRequestForm b("yellow");
	PresidentialPardonForm c("gg");
//	a.task(bur);
//	b.task(bur);
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
}