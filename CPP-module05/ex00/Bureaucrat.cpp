#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (this->_grade < LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade > HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &copy)
{
	if (this != &copy)
		this->_grade = copy._grade;
	return (*this);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (this->_grade < LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade > HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

void	incrementGrade(void)
{

}

void	decrementGrade(void)
{

}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Grade is too low!");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade is too high!");
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b)
{
	std::cout << b.getName() << " bureaucrat grade is " << b.getGrade() << std::endl;
	return (os);
}
