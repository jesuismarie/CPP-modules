#ifndef _FORM_HPP_
# define _FORM_HPP_

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		Form(void);
		Form(const std::string& name, int gradeToSign, int gradeToExecute);
		Form(const Form& copy);
		~Form();
		Form&				operator=(const Form& other);
		const std::string&	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		void				beSigned(Bureaucrat& b);
		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& f);

#endif
