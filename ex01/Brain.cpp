/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:07:14 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:07:15 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void){

	std::cout << "Brain constructor called !\n";
}

Brain::Brain(const Brain &obj){

	*this = obj;
}

Brain::~Brain(void){

	std::cout << "Brain destructor called!\n";
}

Brain&			Brain::operator=(const Brain &obj){

	if (this != &obj){
		for (int i = 0; i < 100; i ++)
			this->ideas[i] = obj.ideas[i];
	}
	return *this;
}