/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:48 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:49 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria {

	public:
								Ice(void);
								Ice(const Ice &obj);
								~Ice(void);
		Ice&					operator=(const Ice &obj);
		AMateria*				clone(void) const;
		void					use(ICharacter& target);
};
#endif