/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 14:16:31 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("X") {

	if (LOG)
		std::cout << "Default WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {

	if (LOG)
		std::cout << "Default WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src) {

	if (LOG)
		std::cout << "Copy WrongAnimal Constructor" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {

	if (LOG)
		std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal & src) {

	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "strange sound" << std::endl;
}

std::string		WrongAnimal::getType(void) const {

	return this->_type;
}