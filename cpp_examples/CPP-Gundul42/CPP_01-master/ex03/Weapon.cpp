/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:40:27 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 16:49:43 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string wname): _type(wname)
{}

Weapon::~Weapon(void)
{}

void	Weapon::setType(std::string name)
{
	this->_type = name;
}

std::string const	&Weapon::getType(void) const
{
	return (this->_type);
}
