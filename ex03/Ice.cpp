#include "Ice.hpp"

Ice::Ice(void){

	this->_type = "ice";
}

Ice::Ice(const Ice &obj){

}

Ice::~Ice(void){

}

Ice&					Ice::operator=(const Ice &obj){

}

AMateria*				Ice::clone(void) const{

	return new Ice;
}

void					Ice::use(ICharacter& target){

	std::cout << "* shoots an ice bolt at <name> *"; // un finished code
}