/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 13:36:56 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Constructors
Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	std::cout << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &cpy) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	std::cout << std::endl;
	*this = cpy;
}

//Destructor
Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
	std::cout << std::endl;
}

//Operator overload
Cat&	Cat::operator=(const Cat &ovr)
{
	this->_type = ovr._type;
	std::cout << "Cat operator overload for =" << std::endl;
	std::cout << std::endl;
	return (*this);
}

//methods

std::string	Cat::makeSound(void) const
{
	return ("MIAUUUU");
}
