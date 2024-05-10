#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void){

	for (int i = 0; i < 4; i ++)
		this->_slot[i] = nullptr;
}

MateriaSource::~MateriaSource(void){
	
	int	i = 0;
	while (this->_slot[i] != nullptr && i < 4){

		delete this->_slot[i];
		this->_slot[i] = nullptr;
		i ++;
	}
}

void						MateriaSource::learnMateria(AMateria* m){

	int	i = 0;
	while (this->_slot[i] != nullptr && i < 4){
		i ++;
	}
	if (i != 4)
		this->_slot[i] = m->clone();

}

AMateria*					MateriaSource::createMateria(std::string const& type){

	if (type == "ice")
		//std::cout << "ice\n";
		return new Ice();
	else if (type == "cure")
		//std::cout << "cure\n";
		return new Cure();
	else
		return nullptr;
	return nullptr;
}