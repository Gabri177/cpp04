/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:53 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:54 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource {

	public:
			virtual				~IMateriaSource(void) {};
			virtual void		learnMateria(AMateria*) = 0;
			virtual AMateria*	createMateria(std::string const& type) = 0;
};
#endif