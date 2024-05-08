#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	
	const WrongAnimal* base = new WrongAnimal();
	const WrongAnimal* a_cat = new WrongCat();
	std::cout << base->getType() << " " << std::endl;
	std::cout << a_cat->getType() << " " << std::endl;
	base->makeSound();
	a_cat->makeSound();
	delete base;
	delete a_cat;
	system ("leaks -q Animal");
	return 0;
}