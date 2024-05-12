/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:06:03 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:06:04 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {

	std::cout << "Class [Dog](void) constructor called!!\n";
}
Dog::Dog(const Dog &obj): Animal(obj.type){
	
	std::cout << "Class [Dog](Dog) constructor called!!\n";
}
Dog::~Dog(void){

	std::cout << "Class [Dog](Dog) destructor called!!\n";
}
Dog&				Dog::operator=(const Dog &obj){

	if (this != &obj){

		this->type = obj.type;
	}
	std::cout << "Class [Dog](Dog) operator called!!\n";
	return *this;
}

void				Dog::makeSound(void) const{

	std::cout << "walf walf walf!\n";
}