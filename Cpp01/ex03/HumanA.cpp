/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:08:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/24 15:11:51 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "Weapon.hpp"

void	HumanA::attack(void) {

	std::cout << this->_name << ": attacks with " << this->_weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) {

	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA(void) {}
