#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	testDeepCopy(void)
{
	std::cout << "\n>>> RUNNING DEEPCOPY TESTS\n" << std::endl;
	std::cout << "--- Dog's behavior ---" << std::endl;
	Dog	dogA;
	Dog	dogB;

	std::cout << "-------" << std::endl;
	dogA.getBrain()->setIdea("DogA's idea", 0);
	dogA.getBrain()->setIdea("DogB's idea", 0);
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    getIdea(0)=" << dogA.getBrain()->getIdea(0) << " (" << &dogA.getBrain()->getIdea(0) << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    getIdea(0)="  << dogB.getBrain()->getIdea(0) << " (" << &dogB.getBrain()->getIdea(0) << ")" << std::endl;

	std::cout << "-------" << std::endl;
	dogB = dogA;
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    getIdea(0)=" << dogA.getBrain()->getIdea(0) << " (" << &dogA.getBrain()->getIdea(0) << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    getIdea(0)=" << dogB.getBrain()->getIdea(0) << " (" << &dogB.getBrain()->getIdea(0) << ")" << std::endl;

	std::cout << "--- Cat's behavior ---" << std::endl;
	Cat	catA;
	Cat	catB;

	std::cout << "-------" <<  std::endl;
	dogA.getBrain()->setIdea("CatA's idea", 0);
	dogA.getBrain()->setIdea("CatB's idea", 0);
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    getIdea(0)=" << catA.getBrain()->getIdea(0) << " (" << &catA.getBrain()->getIdea(0) << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    getIdea(0)=" << catB.getBrain()->getIdea(0) << " (" << &catB.getBrain()->getIdea(0) << ")" << std::endl;

	std::cout << "-------"  << std::endl;
	catB = catA;
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    getIdea(0)=" << catA.getBrain()->getIdea(0) <<  " (" << &catA.getBrain()->getIdea(0) << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    getIdea(0)=" <<  catB.getBrain()->getIdea(0) << " (" << &catB.getBrain()->getIdea(0) << ")" << std::endl;
}

int	main(void)
{
	std::cout << "Creating and filling array of Animal objects..." << std::endl;
	Animal	*animals[10];
	for (int i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl << "Deleting every Animal..." << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << std::endl << "Creating Dog and Cat objects..." << std::endl;
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	std::cout << std::endl << "Deleting Dog and Cat objects..." << std::endl;
	delete j;
	delete i;
	// Dog base;
	// {
	// 	Dog tmp = base;
	// }
	// testDeepCopy();
	return (0);
}
