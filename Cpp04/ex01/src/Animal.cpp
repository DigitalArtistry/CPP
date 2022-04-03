/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 12:23:54 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("X") {

	if (LOG)
		std::cout << "Default Animal Constructor" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {

	if (LOG)
		std::cout << "Default Animal Constructor" << std::endl;
}

Animal::Animal(const Animal & src) {

	if (LOG)
		std::cout << "Copy Animal Constructor" << std::endl;
	*this = src;
}

Animal::~Animal() {

	if (LOG)
		std::cout << "Animal Destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal & src) {

	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	Animal::makeSound(void) const {

	std::cout << "strange sound" << std::endl;
}

std::string		Animal::getType(void) const {

	return this->_type;
}