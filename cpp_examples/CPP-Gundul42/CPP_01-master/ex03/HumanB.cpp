/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:43:04 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 18:09:35 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB(void)
{}

void	HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << _name << " attacks with his " << this->_weapon->getType();
		std::cout << std::endl;
	}
	else
		std::cout << _name << " has only his bare hands " << std::endl;
}

void	HumanB::setWeapon(Weapon &newweapon)
{
	this->_weapon = &newweapon;
}
