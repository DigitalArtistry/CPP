/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:01:06 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 17:35:48 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &wtype): _name(name), _weapon(wtype)
{}

HumanA::~HumanA(void)
{}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << this->_weapon.getType();
	std::cout << std::endl;
}
