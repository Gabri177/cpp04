#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter {

	private:
		std::string					_name;
		AMateria*					_slot[4];
									Character(void);
	
	public:
									Character(std::string name);
									Character(const Character &obj);
									~Character(void);
		Character&					operator=(const Character &obj);
		std::string const&			getName(void) const;
		void						equip(AMateria* m);
		void						unequip(int idx);
		void						use(int idx, ICharacter& target);


};
#endif