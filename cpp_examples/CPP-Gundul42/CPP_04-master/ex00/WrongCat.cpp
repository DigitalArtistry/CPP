/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 13:41:41 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Constructors
WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	std::cout << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	std::cout << std::endl;
	*this = cpy;
}

//Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor called" << std::endl;
	std::cout << std::endl;
}

//Operator overload
WrongCat&	WrongCat::operator=(const WrongCat &ovr)
{
	this->_type = ovr._type;
	std::cout << "WrongCat operator overload for =" << std::endl;
	std::cout << std::endl;
	return (*this);
}

//methods

std::string	WrongCat::makeSound(void) const
{
	return ("MUUUUH");
}
