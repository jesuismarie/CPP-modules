#ifndef _INTERN_HPP_
# define _INTERN_HPP_

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		AForm*	createShrubbery(std::string target);
		AForm*	createRobotomy(std::string target);
		AForm*	createPresidential(std::string target);
	public:
		Intern(void);
		Intern(const Intern& copy);
		~Intern();
		Intern&	operator=(const Intern& other);
		AForm*	makeForm(std::string name, std::string target);
};

#endif
