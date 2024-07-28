#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::cout << "Creating and filling array of Animal objects..." << std::endl;
	Animal*	animals[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl << "Deleting every Animal..." << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << std::endl << "Creating Dog and Cat objects..." << std::endl;
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	std::cout << std::endl << "Deleting Dog and Cat objects..." << std::endl;
	delete j;
	delete i;
	return (0);
}
