/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 13:31:29 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Constructors
WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	std::cout << std::endl;
	this->_type = "A WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	std::cout << std::endl;
	*this = cpy;
}

//Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
	std::cout << std::endl;
}

//Operator overload
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &ovr)
{
	this->_type = ovr._type;
	std::cout << "WrongAnimal operator overload for =" << std::endl;
	std::cout << std::endl;
	return (*this);
}

//methods
std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

std::string	WrongAnimal::makeSound(void) const
{
	return ("undefined Sound");
}
