#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {

	protected:
		std::string				_type;
	public:
								AMateria(void);
								AMateria(const AMateria &obj);
								~AMateria(void);
		AMateria&				operator=(const AMateria &obj);
		std::string const&		getType(void) const;
		virtual AMateria*  		clone(void) const = 0;
		virtual void			use(ICharacter& target);
};
#endif