#include "Animal.hpp"

Animal::Animal(void) : type("UnSet"){

	std::cout << "class [Animal](void) constructor called!\n";
}

Animal::Animal(std::string type){

	std::cout << "class [Animal](string) constructor called!\n";
	this->type = type;
}

Animal::Animal(const Animal &obj){

	std::cout << "class [Animal](Animal) constructor called!\n";
	this->type = obj.type;
}

Animal::~Animal(void){

	std::cout << this->type << " class [Animal](void) destoryed!!" << std::endl;
}

Animal&				Animal::operator=(const Animal &obj){

	std::cout << "class [Animal](Animal) operator called!\n";
	if (this != &obj){

		this->type = obj.type;
	}
	return *this;
}

std::string			Animal::getType(void) const{

	return this->type;
}

void		Animal::makeSound(void) const{

	std::cout << "Unkown sound!\n";
}