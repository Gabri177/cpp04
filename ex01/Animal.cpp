/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:07:09 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:07:10 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("UnSet"){

	std::cout << "class [Animal](void) constructor called!\n";
}

Animal::Animal(std::string type){

	std::cout << "class [Animal](string) constructor called!\n";
	this->_type = type;
}

Animal::Animal(const Animal &obj){

	std::cout << "class [Animal](Animal) constructor called!\n";
	this->_type = obj._type;
}

Animal::~Animal(void){

	std::cout << this->_type << " class [Animal](void) destoryed!!" << std::endl;
}

Animal&				Animal::operator=(const Animal &obj){

	std::cout << "class [Animal](Animal) operator called!\n";
	if (this != &obj){

		this->_type = obj._type;
	}
	return *this;
}

std::string			Animal::getType(void) const{

	return this->_type;
}

void		Animal::makeSound(void) const{

	std::cout << "Unkown sound!\n";
}