/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:32 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:33 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string				_type;
		
	public:
								AMateria(void);
								AMateria(std::string const& type);
								AMateria(const AMateria &obj);
		virtual					~AMateria(void);
		AMateria&				operator=(const AMateria &obj);
		std::string const&		getType(void) const;
		virtual AMateria*  		clone(void) const = 0;
		virtual void			use(ICharacter& target) = 0;
};
#endif