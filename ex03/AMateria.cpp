#include "AMateria.hpp"

AMateria::AMateria(void): _type("unset"){

}

AMateria::AMateria(const AMateria &obj){

	*this = obj;
}

AMateria::AMateria(std::string const& type): _type(type){

}

AMateria::~AMateria(void){
	
}

AMateria&				AMateria::operator=(const AMateria &obj){

	if (this != &obj){
		this->_type = obj._type;
	}
	return *this;
}

std::string const&		AMateria::getType(void) const{

	return this->_type;
}
