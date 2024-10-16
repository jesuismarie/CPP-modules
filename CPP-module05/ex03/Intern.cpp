#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern() {}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern&	Intern::operator=(const Intern& other)
{
	(void) other;
	return (*this);
}

AForm*	Intern::createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::createPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string	forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm*	(Intern::*fptr[])(std::string) = {
		&Intern::createShrubbery,
		&Intern::createRobotomy,
		&Intern::createPresidential
	};
	for (int i = 0; i < 3; ++i)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*fptr[i])(target));
		}
	}
	std::cout << "Intern: Can't create form: Invalid form name!" << std::endl;
	return (NULL);
}
