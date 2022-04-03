/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:58:22 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 18:04:08 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal("Dog") {

	if (LOG)
		std::cout << "Default Dog Constructor" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog & src) : Animal(src) {

	if (LOG)
		std::cout << "Copy Dog Constructor" << std::endl;
	_brain = new Brain(*(src._brain));
	*this = src;
}

Dog::~Dog() {

	if (LOG)
		std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog	&Dog::operator=(const Dog & src) {

	if (this != &src) {
		this->_type = src._type;
		*(this->_brain) = *(src._brain);
	}
	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "Wouf Wouf" << std::endl;
}

void	Dog::showIdeas(int &nb) const {

	this->_brain->showIdeas(nb);
}