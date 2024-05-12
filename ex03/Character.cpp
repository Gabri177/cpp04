/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:35 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:36 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name){

	for (int i = 0; i < 4; i ++)
		this->_slot[i] = 0;
}

Character::Character(const Character &obj){
	
	*this = obj;
}

Character::~Character(void){

	for (int i = 0; i < 4; i ++){
		if (this->_slot[i] != 0)
			delete this->_slot[i];
	}
}

Character&					Character::operator=(const Character &obj){

	if (this != &obj){
		int i = 0;

		this->_name = obj.getName();
		while (this->_slot[i] != 0 && i < 4){
			delete this->_slot[i];
			this->_slot[i] = 0;
			i ++;
		}
		for (int j = 0; j < 4; j ++){
			if (obj._slot[j] != 0)
				this->_slot[i] = obj._slot[i]->clone();
		}
	}
	return *this;
}

std::string const&			Character::getName(void) const{

	return this->_name;
}

void						Character::equip(AMateria* m){

	if (!m) return;
    for (int i = 0; i < 4; i++) {
        if (this->_slot[i] == 0) {
            this->_slot[i] = m->clone();
			delete m;
            break;
        }
    }
}

void						Character::unequip(int idx){

	if (this->_slot[idx] != 0){

		delete this->_slot[idx];
		this->_slot[idx] = 0;
	}
}

void						Character::use(int idx, ICharacter& target){

	if (this->_slot[idx] != 0)
		this->_slot[idx]->use(target);
}