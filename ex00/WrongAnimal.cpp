/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:06:13 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:06:14 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("UnSet"){

	std::cout << "class [WrongAnimal](void) constructor called!\n";
}

WrongAnimal::WrongAnimal(std::string type): type(type){

	std::cout << "class [WrongAnimal](string) constructor called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj): type(obj.type){

	std::cout << "class [WrongAnimal](WrongAnimal) constructor called!\n";
}

WrongAnimal::~WrongAnimal(void){

	std::cout << this->type << " class [WrongAnimal](void) destoryed!!" << std::endl;
}

WrongAnimal&				WrongAnimal::operator=(const WrongAnimal &obj){

	std::cout << "class [WrongAnimal](WrongAnimal) operator called!\n";
	if (this != &obj){

		this->type = obj.type;
	}
	return *this;
}

std::string			WrongAnimal::getType(void) const{

	return this->type;
}

void		WrongAnimal::makeSound(void) const{

	std::cout << "Unkown sound!\n";
}