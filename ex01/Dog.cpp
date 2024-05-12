/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:07:24 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:07:25 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {

	this->ideas = new Brain;
	std::cout << "Class [Dog](void) constructor called!!\n";
}
Dog::Dog(const Dog &obj): Animal("Dog"){
	
	*this = obj;
	std::cout << "Class [Dog](Dog) constructor called!!\n";
}
Dog::~Dog(void){

	delete this->ideas;
	std::cout << "Class [Dog](Dog) destructor called!!\n";
}
Dog&				Dog::operator=(const Dog &obj){

	if (this != &obj){

		this->ideas = new Brain;
		for (int i = 0; i < 100; i ++){

			this->ideas[i] = obj.ideas[i];
		}
		this->_type = obj._type;
	}
	std::cout << "Class [Dog](Dog) operator called!!\n";
	return *this;
}

void				Dog::makeSound(void) const{

	std::cout << "walf walf walf!\n";
}