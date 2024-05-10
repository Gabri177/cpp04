#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {

	private:
		AMateria*					_slot[4];
	
	public:
									MateriaSource(void);
									~MateriaSource(void);
		void						learnMateria(AMateria*);
		AMateria*					createMateria(std::string const& type);
};
#endif