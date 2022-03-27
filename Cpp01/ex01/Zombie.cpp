/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:55:12 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/24 09:55:52 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

	// std::cout << "Constructor" << std::endl;
}

Zombie::~Zombie(void) {

	// std::cout << "Destructor" << std::endl;
}

void	Zombie::nameZombie(std::string name) {

	this->_name = name;
}

void	Zombie::announce(void) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}