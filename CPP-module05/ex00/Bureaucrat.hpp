#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>

# define HIGH_GRADE 150
# define LOW_GRADE 1

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat(void);
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);
		Bureaucrat			&operator=(Bureaucrat const &copy);
		int					getGrade(void) const;
		void				setGrade(int grade);
		const std::string	&getName(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b);

#endif
