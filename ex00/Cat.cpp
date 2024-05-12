/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:05:58 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:05:59 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {

	std::cout << "Class [Cat](void) constructor called!!\n";
}
Cat::Cat(const Cat &obj): Animal(obj.type){
	
	std::cout << "Class [Cat](Cat) constructor called!!\n";
}
Cat::~Cat(void){

	std::cout << "Class [Cat](Cat) destructor called!!\n";
}
Cat&				Cat::operator=(const Cat &obj){

	if (this != &obj){

		this->type = obj.type;
	}
	std::cout << "Class [Cat](Cat) operator called!!\n";
	return *this;
}

void				Cat::makeSound(void) const{

	std::cout << "miao miao miao!\n";
}