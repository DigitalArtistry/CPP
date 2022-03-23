/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:31:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/17 11:24:28 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructors
DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name")
{
	this->_name = "Default";
	this->FragTrap::setHitPoints();
	this->FragTrap::setAttackDamage();
	this->ScavTrap::setEnergyPoints();
	std::cout << "DiamondTrap default constructor called" << std::endl;
	std::cout << "Diamond: " << this->_name << ", ";
	std::cout << this->_hitpts << ", " << this->_energypts;
	std::cout << ", " << this->_attckdmg << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->FragTrap::setHitPoints();
	this->FragTrap::setAttackDamage();
	this->ScavTrap::setEnergyPoints();
	std::cout << "DiamondTrap constructor called" << std::endl;
	std::cout << "Diamond: " << this->_name << ", ";
	std::cout << this->_hitpts << ", " << this->_energypts;
	std::cout << ", " << this->_attckdmg << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy._name + "_clap_name"),
	ScavTrap(cpy._name + "_clap_name"), FragTrap(cpy._name + "_clap_name")
{
	*this = cpy;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	std::cout << "Diamond: " << this->_name << ", ";
	std::cout << this->_hitpts << ", " << this->_energypts;
	std::cout << ", " << this->_attckdmg << std::endl;
	std::cout << std::endl;
}

//Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	std::cout << this->_name << " says good bye" << std::endl;
	std::cout << std::endl;
}

//Operator overload for '='
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap  &ovr)
{
	this->ClapTrap::_name = ovr.ClapTrap::_name;
	this->_name = ovr._name;
	this->_hitpts = ovr._hitpts;
	this->_energypts = ovr._energypts;
	this->_attckdmg = ovr._attckdmg;
	return (*this);
}

//Member functions
void	DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "It's ClapTrap name is: " << this->ClapTrap::_name << std::endl;
	std::cout << std::endl;
}
