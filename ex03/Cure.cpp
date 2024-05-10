#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {

}

Cure::Cure(const Cure &obj){

	*this = obj;
}

Cure::~Cure(void){

}

Cure&					Cure::operator=(const Cure &obj){

	if (this != &obj && obj._type == "cure"){

		this->_type = obj._type;
	}else{

		std::cout << "You can not change the type of current obj!!!\n";
	}
	return *this;
}

AMateria*				Cure::clone(void) const{

	return new Cure;
}

void					Cure::use(ICharacter& target){

	std::cout << "* heals "
			  << target.getName()
			  << "'s wounds *"
			  << std::endl;
}