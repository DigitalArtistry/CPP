/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:09:16 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/23 11:42:29 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name) {

	this->_name = name;
}

void	Zombie::announce(void) {

	std::cout << GREEN << this->_name << ": BraiiiiiiinnnzzzZ..." << NORMAL << std::endl;
}

Zombie::~Zombie(void) {

	std::cout << RED << this->_name << " Destroyed" << NORMAL << std::endl;
}