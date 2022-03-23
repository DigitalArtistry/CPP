/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:31:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/17 11:21:21 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitpts = 100;
	this->_energypts = 100;
	this->_attckdmg = 30;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}
		
FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called with name, " << name << std::endl;
	this->_hitpts = 100;
	this->_energypts = 100;
	this->_attckdmg = 30;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cpy;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}

//Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	std::cout << this->_name << " says good bye" << std::endl;
	std::cout << std::endl;
}

//Operator overload for '='
FragTrap&	FragTrap::operator=(const FragTrap  &ovr)
{
	this->_name = ovr._name;
	this->_hitpts = ovr._hitpts;
	this->_energypts = ovr._energypts;
	this->_attckdmg = ovr._attckdmg;
	return (*this);
}

//Member functions
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap HighFivesGuys" << std::endl;
	std::cout << this->_name << " requests for a HighFive!" << std::endl;
	std::cout << std::endl;
}
