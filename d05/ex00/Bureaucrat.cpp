#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
	*this = copy;
}
Bureaucrat::~Bureaucrat() {

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &copy) {
	this->_name = copy._name;
	this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	this->_name = name;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw  Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}
Bureaucrat Bureaucrat::operator++() {
	setGrade(this->_grade - 1);
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int) {
	Bureaucrat tmp = Bureaucrat(*this);
	setGrade(this->_grade - 1);
	return (tmp);
}

Bureaucrat Bureaucrat::operator--() {
	setGrade(this->_grade + 1);
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int) {
	Bureaucrat tmp = Bureaucrat(*this);
	setGrade(this->_grade + 1);
	return (tmp);
}

std::ostream		&operator<<(std::ostream &o, Bureaucrat const &src) {
	o << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">.";
	return (o);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::setGrade(int const g) {
	if (g > 150)
		throw GradeTooLowException();
	else if (g < 1)
		throw  GradeTooHighException();
	this->_grade = g;
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {

}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {

}

Bureaucrat::GradeTooHighException::GradeTooHighException(
		const Bureaucrat::GradeTooHighException &src) {
	*this = src;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return("Grade is too HIGH!\n");
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(
		const Bureaucrat::GradeTooHighException &src) {
	(void)src;
	return (*this);
}


Bureaucrat::GradeTooLowException::GradeTooLowException() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException(
		const Bureaucrat::GradeTooLowException &src) {
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(
		const Bureaucrat::GradeTooLowException &src) {
	(void)src;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return("Grade is too LOW!\n");
}

