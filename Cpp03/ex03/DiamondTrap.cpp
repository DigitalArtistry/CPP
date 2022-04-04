/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:05:11 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 19:59:23 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {

	if (LOG)
		std::cout << GRAY2 << "DiamondTrap, ready for action" << END << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clapname") {

	_alive = true;
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_damage = FragTrap::_damage;
	if (LOG)
		std::cout << GRAY2 << "Init DiamondTrap constructor called" << END << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {

	if (LOG)
		std::cout << GRAY << "Copy constructor called" << END << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	if (LOG)
		std::cout << GRAY2 << "Destructor called of DiamondTrap" << END << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& src) {

	if (LOG)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->_alive = src._alive;
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_damage = src._damage;
	}
	return *this;
}

void	DiamondTrap::whoAmI(void) const {

	std::cout << "My name is " << _name << " my clapName is " << ClapTrap::_name << "!" << std::endl;
}