#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;

	
	// const WrongAnimal* base = new WrongAnimal();
	// const WrongAnimal* a_cat = new WrongCat();
	// std::cout << base->getType() << " " << std::endl;
	// std::cout << a_cat->getType() << " " << std::endl;
	// base->makeSound();
	// a_cat->makeSound();
	// delete base;
	// delete a_cat;

	Animal	*obj[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	Dog	*test1;
	test1 = new Dog();
	delete test1;
	test1 = dynamic_cast<Dog*> (obj[1]);
	test1->makeSound();	
	for (int x  = 0; x < 4 ; x ++){
		obj[x]->makeSound();
		delete obj[x];
	}
	
	//system ("leaks -q Animal");
	return 0;
}