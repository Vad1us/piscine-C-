#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class Form;

class                   Bureaucrat
{

public:

    Bureaucrat();
    Bureaucrat(Bureaucrat const & copy);
    ~Bureaucrat();

    Bureaucrat &           operator=(Bureaucrat const &copy);

    Bureaucrat(std::string name, int grade);
    std::string			getName() const ;
    int 				getGrade() const ;
	void				setGrade(int const g);
    Bureaucrat operator++();
	Bureaucrat operator++(int);
	Bureaucrat operator--();
	Bureaucrat operator--(int);

	void			signForm(Form &src);

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

private:
	std::string 		_name;
	int					_grade;
};

std::ostream &          operator<<(std::ostream &o, Bureaucrat const &inst);

#endif
