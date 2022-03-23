/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:35:24 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 12:07:21 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiiiinnnzzzzZ" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> just lost his head" << std::endl;
}
