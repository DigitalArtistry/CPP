/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:19:51 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 19:55:13 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap") {

	_alive = true;
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;
	if (LOG)
		std::cout << GRAY2 << "FragTrap, ready for action" << END << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	_alive = true;
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;
	if (LOG)
		std::cout << GRAY2 << "Init FragTrap constructor called" << END << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {

	if (LOG)
		std::cout << GRAY << "Copy constructor called" << END << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	if (LOG)
		std::cout << GRAY2 << "Destructor called of FragTrap" << END << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap& src) {

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

void	FragTrap::attack(const std::string& target) {

	if (!_alive)
		return;
	else if (_energyPoints > 0) {
		std::cout << BLUE << _printName() << END << "Throws Fragmentation grenade at " << YELLOW << "[" << target << "]" << END << " (-" << this->_damage << "HP)" << std::endl;
		this->_energyPoints--;
	}	else
		std::cout << BLUE << _printName() << END << "Can't attack, no energy left" << std::endl;
	_getStats();
}

void	FragTrap::highFivesGuys(void) const {

	std::cout << std::setw(8) << CYAN << "How about a high five!?" << END << std::endl;
}
