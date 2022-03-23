/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:31:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/17 11:22:59 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//This is not really needed.
//The one and only use is to get an extra output
//to see when ScavTrap's constructor + destructor are called

//Constructors
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitpts = 100;
	this->_energypts = 50;
	this->_attckdmg = 20;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}
		
ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called with name, " << name << std::endl;
	this->_hitpts = 100;
	this->_energypts = 50;
	this->_attckdmg = 20;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = cpy;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}

//Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	std::cout << this->_name << " says good bye" << std::endl;
	std::cout << std::endl;
}

//Operator overload for '='
ScavTrap&	ScavTrap::operator=(const ScavTrap  &ovr)
{
	this->_name = ovr._name;
	this->_hitpts = ovr._hitpts;
	this->_energypts = ovr._energypts;
	this->_attckdmg = ovr._attckdmg;
	return (*this);
}

//Member functions
void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap Gate keeper mode" << std::endl;
	std::cout << this->_name << " entered gate keeper mode!" << std::endl;
	std::cout << std::endl;
}
		
void	ScavTrap::setEnergyPoints(void)
{
	this->_energypts = 50;
	std::cout << "ScavTrap sets energy points to ScavTrap default of 50" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap calling ClapTrap::attack" << std::endl;
	this->ClapTrap::attack(target);
}
