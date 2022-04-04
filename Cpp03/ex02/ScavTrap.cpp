/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:19:51 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 19:54:01 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap") {

	_alive = true;
	_hitPoints = 100;
	_energyPoints = 50;
	_damage = 20;
	if (LOG)
		std::cout << GRAY2 << "ScavTrap, ready for action" << END << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	_alive = true;
	_hitPoints = 100;
	_energyPoints = 50;
	_damage = 20;
	if (LOG)
		std::cout << GRAY2 << "Init ScavTrap constructor called" << END << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (LOG)
		std::cout << GRAY2 << "Destructor called of ScavTrap" << END << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src) {

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

void	ScavTrap::attack(const std::string& target) {

	if (!_alive)
		return;
	else if (_energyPoints > 0) {
		std::cout << BLUE << _printName() << END << "uses Electric Destruction on " << YELLOW << "[" << target << "]" << END << " (-" << this->_damage << "HP)" << std::endl;
		this->_energyPoints--;
	}	else
		std::cout << BLUE << _printName() << END << "ScavTrap can't attack, no energy left" << std::endl;
	_getStats();
}

void	ScavTrap::guardGate() const {

	std::cout << std::setw(8) << CYAN << "Gate keeper mode activated" << END << std::endl;
}
