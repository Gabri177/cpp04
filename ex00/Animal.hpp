/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:05:55 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:05:56 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {

	protected:
		std::string 		type;
	
	public:
							Animal(void);
							Animal(std::string type);
							Animal(const Animal &obj);
		virtual				~Animal(void);
		Animal&				operator=(const Animal &obj);
		std::string			getType(void) const;
		virtual	void		makeSound(void) const;

};

#endif