/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:51:44 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 14:17:45 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {

	if (LOG)
		std::cout << "Default WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src) {

	if (LOG)
		std::cout << "Copy WrongCat Constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {

	if (LOG)
		std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat & src) {

	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	WrongCat::makeSound(void) const {

	std::cout << "Miaoooo" << std::endl;
}
