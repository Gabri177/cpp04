#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {

	this->ideas = new Brain;
	std::cout << "Class [Cat](void) constructor called!!\n";
}
Cat::Cat(const Cat &obj): Animal(obj.type){
	
	this->ideas = new Brain;
	std::cout << "Class [Cat](Cat) constructor called!!\n";
}
Cat::~Cat(void){

	delete this->ideas;
	std::cout << "Class [Cat](Cat) destructor called!!\n";
}
Cat&				Cat::operator=(const Cat &obj){

	if (this != &obj){

		this->type = obj.type;
	}
	std::cout << "Class [Cat](Cat) operator called!!\n";
	return *this;
}

void				Cat::makeSound(void) const{

	std::cout << "miao miao miao!\n";
}