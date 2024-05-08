#include "Brain.hpp"
#include <iostream>

Brain::Brain(void){

	std::cout << "Brain constructor called !\n";
}

Brain::Brain(const Brain &obj){

	*this = obj;
}

Brain::~Brain(void){

	std::cout << "Brain destructor called!\n";
}

Brain&			Brain::operator=(const Brain &obj){

	if (this != &obj){
		for (int i = 0; i < 100; i ++)
			this->ideas[i] = obj.ideas[i];
	}
	return *this;
}