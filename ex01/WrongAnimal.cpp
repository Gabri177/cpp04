/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:07:36 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:07:37 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("UnSet"){

	std::cout << "class [WrongAnimal](void) constructor called!\n";
}

WrongAnimal::WrongAnimal(std::string type): _type(type){

	std::cout << "class [WrongAnimal](string) constructor called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj): _type(obj._type){

	std::cout << "class [WrongAnimal](WrongAnimal) constructor called!\n";
}

WrongAnimal::~WrongAnimal(void){

	std::cout << this->_type << " class [WrongAnimal](void) destoryed!!" << std::endl;
}

WrongAnimal&				WrongAnimal::operator=(const WrongAnimal &obj){

	std::cout << "class [WrongAnimal](WrongAnimal) operator called!\n";
	if (this != &obj){

		this->_type = obj._type;
	}
	return *this;
}

std::string			WrongAnimal::getType(void) const{

	return this->_type;
}

void		WrongAnimal::makeSound(void) const{

	std::cout << "Unkown sound!\n";
}