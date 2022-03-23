/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 13:38:24 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Constructors
Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	std::cout << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &cpy) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	std::cout << std::endl;
	*this = cpy;
}

//Destructor
Dog::~Dog(void)
{
	std::cout << "Dog default destructor called" << std::endl;
	std::cout << std::endl;
}

//Operator overload
Dog&	Dog::operator=(const Dog &ovr)
{
	this->_type = ovr._type;
	std::cout << "Dog operator overload for =" << std::endl;
	std::cout << std::endl;
	return (*this);
}

//methods

std::string	Dog::makeSound(void) const
{
	return ("WUFF");
}
