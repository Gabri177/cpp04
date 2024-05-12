/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:06:21 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:06:22 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

	public:
							WrongCat(void);
							WrongCat(const WrongCat &obj);
							~WrongCat(void);
		WrongCat&				operator=(const WrongCat &obj);
		void				makeSound(void) const;

};
#endif