/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/19 12:35:22 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Constructors
Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	std::cout << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
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
	delete this->_brain;
}

//Operator overload
Dog&	Dog::operator=(const Dog &ovr)
{
	this->_type = ovr._type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*ovr._brain);
	std::cout << "Dog operator overload for =" << std::endl;
	std::cout << std::endl;
	return (*this);
}

//methods

std::string	Dog::makeSound(void) const
{
	return ("WUFF");
}

std::string	Dog::getIdea(int n)
{
	if (n < 0 || n > 99)
		return ("");
	else
		return (this->_brain->ideas[n]);
}

void		Dog::setIdea(int n, std::string mem)
{
	if (n >= 0 && n < 100)
		this->_brain->ideas[n] = mem;
}
