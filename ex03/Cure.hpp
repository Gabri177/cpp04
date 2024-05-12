/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:43 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:44 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria {


	public:
								Cure(void);
								Cure(const Cure &obj);
								~Cure(void);
		Cure&					operator=(const Cure &obj);
		AMateria*				clone(void) const;
		void					use(ICharacter& target);
};

#endif