#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria {


	public:
		AMateria*				clone(void) const;
		void					use(ICharacter& target);
};

#endif