/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:13:35 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/24 15:14:40 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

void	Weapon::setType(std::string type) {

	this->_type = type;
}

std::string const	&Weapon::getType(void) {

	return this->_type;
}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {}
