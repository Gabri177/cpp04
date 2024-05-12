/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:06:06 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:06:07 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal{

	public:
							Dog(void);
							Dog(const Dog &obj);
							~Dog(void);
		Dog&				operator=(const Dog &obj);
		void				makeSound(void) const;

};
#endif