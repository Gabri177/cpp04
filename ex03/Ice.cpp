/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:45 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:46 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {

}

Ice::Ice(const Ice &obj): AMateria("ice"){

	*this = obj;
}

Ice::~Ice(void){

}

Ice&					Ice::operator=(const Ice &obj){

	if (this != &obj && obj._type == "ice"){

		this->_type = obj._type;
	}else{

		std::cout << "You can not change the type of current obj!!!\n";
	}
	return *this;
}

AMateria*				Ice::clone(void) const{

	return new Ice;
}

void					Ice::use(ICharacter& target){

	std::cout << "* shoots an ice bolt at "
			  << target.getName()
			  << " *"
			  << std::endl;
}