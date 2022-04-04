/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:29:37 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 19:56:20 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _damage(0), _alive(true) {

	if (LOG)
		std::cout << GRAY << "Default ClapTrap constructor called" << END << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _damage(0), _alive(true) {

	if (LOG)
		std::cout << GRAY << "Init ClapTrap constructor called" << END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {

	if (LOG)
		std::cout << GRAY << "Copy constructor called" << END << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {

	if (LOG)
		std::cout << GRAY << "ClapTrap Destructor called"  << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& rhs) {

	if (LOG)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_damage = rhs._damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target) {

	if (!_alive)
		return;
	else if (_energyPoints > 0) {
		std::cout << BLUE << _printName() << END << "Attacks " << YELLOW << "[" << target << "]" << END << " (-" << this->_damage << "HP)" << std::endl;
		this->_energyPoints--;
	}	else
		std::cout << BLUE << _printName() << END << "Can't attack, no energy left" << std::endl;
	_getStats();
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (!_alive)
		return;
	else {
		std::cout << ORANGE << _printName() << END << "I'm getting hit (-" << amount << "HP)" << std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0) {
			_alive = false;
			std::cout << RED << _printName() << END << "Has died"  << std::endl;
		}
	}
	_getStats();
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (!_alive)
		return;
	else if (_energyPoints > 0) {
		std::cout << GREEN << _printName() << END << "Is healing (+" << amount << "HP)" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}	else
		std::cout << GREEN << _printName() << END << "Can't heal, no energy left" << std::endl;
	_getStats();
}

std::string	ClapTrap::_printName(void) const {

	return ("[" + _name + "] ");
}

void	ClapTrap::_getStats(void) const {

	std::cout << GRAY2 << std::setw(8) << _hitPoints << "HP";
	std::cout << std::setw(8) << _energyPoints << "EP";
	std::cout << std::setw(8) << _damage << "AD" << END << std::endl;
}
