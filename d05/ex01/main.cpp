#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
int main() {
	try {
		Bureaucrat b("bibib", 151);
		std::cout << b;
	}
	catch  (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}

	try {
		Bureaucrat b("bibib", 150);
		b--;
		std::cout << b;
	}
	catch  (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}

	try {
		Bureaucrat b("bibib", 1);
		b++;
		std::cout << b;
	}
	catch  (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}

	try {
		Bureaucrat b("bibib", 0);
		std::cout << b;
	}
	catch  (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}
	Bureaucrat b("bibib", 100);
	std::cout << b << "\n";
	std::cout << b++ << "\n";
	std::cout << b << "\n";
	std::cout << ++b << "\n";
	std::cout << b << "\n";
	std::cout << "\n";
	std::cout << ++b << "\n";
	std::cout << b << "\n";

	try {
		Bureaucrat b("bibib", 150);
		Form f("aaa", 149, 149);
		f.beSigned(b);
		std::cout << f;
	}
	catch  (Form::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}
	try {
		Bureaucrat b("bibib", 150);
		Form f("aaa", 149, 149);
		b.signForm(f);
		std::cout << f;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	} catch  (Form::GradeTooHighException &e) {
		std::cout << e.what() << "\n";
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << "\n";
	}
}