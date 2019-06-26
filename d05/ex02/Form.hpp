#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	~Form();
	Form(Form const &src);
	Form(std::string name, int const grade_sign, int const grade_exec);

	Form &operator=(Form const &src);

	std::string			getName() const;
	int 				getGrSign() const;
	int 				getGrExec() const;
	bool				getSigned() const;
	void				beSigned(Bureaucrat &src);
	void				setSigned();

	virtual void task() const;
	void	execute(Bureaucrat const & executor) const;

	class GradeTooHighException : public virtual std::exception {
	public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &src);
		~GradeTooHighException() throw();

		GradeTooHighException &operator=(GradeTooHighException const &src);

		virtual const char * what () const throw ();
	};

	class GradeTooLowException : public virtual std::exception {
	public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &src);
		~GradeTooLowException() throw();

		GradeTooLowException &operator=(GradeTooLowException const &src);

		virtual const char * what () const throw ();
	};

//	class FormIsSigned : public virtual std::exception {
//	public:
//		GradeTooLowException();
//		GradeTooLowException(GradeTooLowException const &src);
//		~GradeTooLowException() throw();
//
//		GradeTooLowException &operator=(GradeTooLowException const &src);
//
//		virtual const char * what () const throw ();
//	};


private:
	std::string const	_name;
	bool				_signed;
	int const			_grade_sign;
	int const			_grade_exec;
};

std::ostream &operator<<(std::ostream &o,Form const &src);

#endif