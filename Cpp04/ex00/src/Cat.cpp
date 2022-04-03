/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:51:44 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 12:25:22 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {

	if (LOG)
		std::cout << "Default Cat Constructor" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src) {

	if (LOG)
		std::cout << "Copy Cat Constructor" << std::endl;
	*this = src;
}

Cat::~Cat() {

	if (LOG)
		std::cout << "Cat Destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat & src) {

	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "Miaoooo" << std::endl;
}
