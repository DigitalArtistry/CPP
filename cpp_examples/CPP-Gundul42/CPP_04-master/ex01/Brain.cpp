/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/19 12:07:36 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Constructors
Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	std::cout << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	std::cout << std::endl;
	*this = cpy;
}

//Destructor
Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
	std::cout << std::endl;
}

//Operator overload
Brain&	Brain::operator=(const Brain &ovr)
{
	int	i;
	std::cout << "Brain operator overload for =" << std::endl;
	std::cout << std::endl;
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = ovr.ideas[i];
		i++;
	}
	return (*this);
}
