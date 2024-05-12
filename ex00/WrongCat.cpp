/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:06:19 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:06:20 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {

	std::cout << "Class [WrongCat](void) constructor called!!\n";
}
WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj.type){
	
	std::cout << "Class [WrongCat](WrongCat) constructor called!!\n";
}
WrongCat::~WrongCat(void){

	std::cout << "Class [WrongCat](WrongCat) destructor called!!\n";
}
WrongCat&				WrongCat::operator=(const WrongCat &obj){

	if (this != &obj){

		this->type = obj.type;
	}
	std::cout << "Class [WrongCat](WrongCat) operator called!!\n";
	return *this;
}

void				WrongCat::makeSound(void) const{

	std::cout << "miao miao miao!\n";
}