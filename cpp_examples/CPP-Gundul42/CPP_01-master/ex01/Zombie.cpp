/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:35:24 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 13:58:17 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiiiinnnzzzzZ" << std::endl;
}

Zombie::Zombie()
{
}

void		Zombie::set_name(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> just lost his head" << std::endl;
}
