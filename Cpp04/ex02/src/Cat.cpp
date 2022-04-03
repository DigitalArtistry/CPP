/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:51:44 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 17:42:54 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal("Cat") {

	if (LOG)
		std::cout << "Default Cat Constructor" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat & src) : Animal(src) {

	if (LOG)
		std::cout << "Copy Cat Constructor" << std::endl;
	_brain = new Brain(*(src._brain));
	*this = src;
}

Cat::~Cat() {

	if (LOG)
		std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat	&Cat::operator=(const Cat & src) {

	if (this != &src) {
		this->_type = src._type;
		*(this->_brain) = *(src._brain);
	}
	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "Miaoooo" << std::endl;
}

void	Cat::showIdeas(int &nb) const {

	this->_brain->showIdeas(nb);
}