/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:57:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 18:55:55 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class	Brain
{
	public:
		std::string	ideas[100];

		Brain(void);
		Brain(const Brain &cpy);
		~Brain(void);

		Brain&	operator=(const Brain &ovr);
};

#endif
