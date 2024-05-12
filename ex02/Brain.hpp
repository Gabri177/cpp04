/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 01:08:00 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 01:08:01 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain{

	private:
		std::string		ideas[100];
	
	public:
						Brain(void);
						Brain(const Brain &obj);
						~Brain(void);
		Brain&			operator=(const Brain &obj);
};
#endif