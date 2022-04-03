/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:58:22 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 12:25:39 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {

	if (LOG)
		std::cout << "Default Dog Constructor" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src) {

	if (LOG)
		std::cout << "Copy Dog Constructor" << std::endl;
	*this = src;
}

Dog::~Dog() {

	if (LOG)
		std::cout << "Dog Destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog & src) {

	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "Wouf Wouf" << std::endl;
}
