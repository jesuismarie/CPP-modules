#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm*	rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery request", "bender");
	delete rrf;
	return (0);
}
