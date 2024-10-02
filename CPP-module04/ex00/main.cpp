#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	wrong = new WrongCat();

	std::cout << "Animal type: " << j->getType() << std::endl;
	j->makeSound(); // will output the dog sound!

	std::cout << "Animal type: " << i->getType() << std::endl;
	i->makeSound(); // will output the cat sound!

	std::cout << "Animal type: " << meta->getType() << std::endl;
	meta->makeSound();

	// Test WrongCat
	std::cout << "Animal type: " << wrong->getType() << std::endl;
	wrong->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrong;
	return (0);
}
