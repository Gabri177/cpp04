/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:10 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:11 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{

	private:
		Brain				*ideas;

	public:
							Dog(void);
							Dog(const Dog &obj);
							~Dog(void);
		Dog&				operator=(const Dog &obj);
		void				makeSound(void) const;

};
#endif