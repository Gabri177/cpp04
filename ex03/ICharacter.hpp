/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:50 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:51 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"

class AMateria;

class ICharacter {

	public:
		virtual							~ICharacter(void){};
		virtual	std::string const&		getName(void) const = 0;
		virtual void					equip(AMateria* m) = 0;
		virtual void					unequip(int idx) = 0;
		virtual void					use(int idx, ICharacter& target) = 0;
};
#endif