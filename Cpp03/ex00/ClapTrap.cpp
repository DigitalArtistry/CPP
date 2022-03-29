/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:29:37 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/29 18:28:28 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("CL4P-TP"), _points(10), _energy(10), _damage(0) {

	if (LOG)
		std::cout << "Hidden constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _points(10), _energy(10), _damage(0) {

	if (LOG)
		std::cout << "Init constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {

	if (LOG)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {

	std::cout << this._name << "has died!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const & rhs) {

	if (LOG)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_points = rhs._points;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target) {

	if (_energy > 0) {
		std::cout << this->_name << " attacks: " << target << " " << this->_damage << " damage received" << std::endl;
		this->_energy--;
	}	else
		std::cout << "Can't attack, no energy left" << std::cout;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << this->_name << ": I'm getting hit, lost: " << amount << " HP" << std::endl;
	this->_points -= amount;
	if (this->_points <= 0)
		std::cout << this->_name << " has died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_energy > 0) {
		std::cout << this->_name << " is healing: "  << amount << " HP recovered" << std::endl;
		this->_points += amount
		this->_energy--;
	}	else
		std::cout << "Can't heal, no energy left" << std::cout;
}