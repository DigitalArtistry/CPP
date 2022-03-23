/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 19:26:38 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors
Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	std::cout << std::endl;
	this->_type = "An Animal";
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	std::cout << std::endl;
	*this = cpy;
}

//Destructor
Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
	std::cout << std::endl;
}

//Operator overload
Animal&	Animal::operator=(const Animal &ovr)
{
	this->_type = ovr._type;
	std::cout << "Animal operator overload for =" << std::endl;
	std::cout << std::endl;
	return (*this);
}

//methods
std::string	Animal::getType(void) const
{
	return (this->_type);
}

std::string	Animal::makeSound(void) const
{
	return ("undefined Sound");
}

std::string	Animal::getIdea(int n)
{
	std::cout << n << " not exists, not every Animal has a brain" << std::endl;
	return ("");
}

void		Animal::setIdea(int n, std::string mem)
{
	std::cout << "Try to set " << n << " to " << mem << std::endl;
	std::cout << "Not every Animal has a brain" << std::endl;
}
