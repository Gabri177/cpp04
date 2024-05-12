/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:06:00 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:06:01 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal{

	public:
							Cat(void);
							Cat(const Cat &obj);
							~Cat(void);
		Cat&				operator=(const Cat &obj);
		void				makeSound(void) const;

};
#endif