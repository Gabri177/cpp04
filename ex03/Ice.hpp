#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria {

	public:
		AMateria*				clone(void) const;
		void					use(ICharacter& target);
};
#endif