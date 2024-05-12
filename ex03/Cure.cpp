/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:40 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:41 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {

}

Cure::Cure(const Cure &obj): AMateria("cure"){

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