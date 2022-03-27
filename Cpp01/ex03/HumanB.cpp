/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:12:16 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/24 15:13:17 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"
# include "Weapon.hpp"

void	HumanB::setWeapon(Weapon &weapon) {

	this->_weapon = &weapon;
}

void	HumanB::attack(void) {

	std::cout << this->_name << ": attacks with " << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(void) {}
