#include "Classes.hpp"

int	main(void)
{
	Base*	bptr = new(B);
	C*		cptr = new(C);
	Base*	unknown = generate();

	identify(bptr);
	identify(cptr);
	identify(unknown);

	delete bptr;
	delete cptr;
	delete unknown;
	return (0);
}
