#include "Form.hpp"

Form::Form() : _name("qq"), _grade_sign(150), _grade_exec(150) {

}

Form::Form(Form const & copy) : _name(copy._name), _signed(false), _grade_sign(copy._grade_sign), _grade_exec(copy._grade_exec) {
	if (_grade_exec > 150)
		throw GradeTooLowException();
	else if (_grade_exec < 1)
		throw  GradeTooHighException();
    *this = copy;
}

Form::~Form() { }

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _signed(false), _grade_sign(grade_exec), _grade_exec(grade_sign) {
	if (_grade_exec > 150)
		throw GradeTooLowException();
	else if (_grade_exec < 1)
		throw  GradeTooHighException();
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() <= this->getGrSign())
		this->_signed = true;
	else
		throw GradeTooLowException();
}
Form		&Form::operator=(Form const & copy) {
	this->_signed = copy._signed;
    return (*this);
}

std::string Form::getName() const {
	return (this->_name);
}

int Form::getGrExec() const {
	return (this->_grade_exec);
}

int Form::getGrSign() const {
	return (this->_grade_sign);
}
bool Form::getSigned() const {
	return (this->_signed);
}
std::ostream &              operator<<(std::ostream & o, Form const & src)
{
	if (src.getSigned() == true)
    	o << "The form <" << src.getName() << ">, with required grade <" <<
    	src.getGrSign() << "> is SIGNED\n";
	else
		o << "The form <" << src.getName() << ">, with required grade <" <<
		  src.getGrSign() << "> is NOT SIGNED\n";
    return (o);
}

Form::GradeTooHighException::GradeTooHighException() {

}

Form::GradeTooHighException::~GradeTooHighException() throw() {

}

Form::GradeTooHighException::GradeTooHighException(
		const Form::GradeTooHighException &src) {
	*this = src;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(
		const Form::GradeTooHighException &src) {
	(void)src;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() {
	return("Form is requiring unrealistic HIGH grade!\n");
}

Form::GradeTooLowException::GradeTooLowException() {

}

Form::GradeTooLowException::GradeTooLowException(
		const Form::GradeTooLowException &src) {
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {

}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(
		const Form::GradeTooLowException &src) {
	(void)src;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw() {
	return("Form is requiring unrealistic LOW grade!\n");
}


void Form::setSigned() {
	this->_signed = true;
}

void Form::task() const {

}

void Form::execute(Bureaucrat const &executor) const {
	if (this->_signed == false)
		std::cout << "Not signed, cant execute.\n";
	if (this->getGrExec() < executor.getGrade())
		throw  GradeTooLowException();
	this->task();
}