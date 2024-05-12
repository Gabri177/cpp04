/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:09:43 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:09:44 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {

	private:
		AMateria*					_slot[4];
	
	public:
									MateriaSource(void);
									~MateriaSource(void);
		void						learnMateria(AMateria*);
		AMateria*					createMateria(std::string const& type);
};
#endif