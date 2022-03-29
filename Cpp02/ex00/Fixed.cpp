/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:55 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/28 15:37:37 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


void	Fixed::setRawBits(int const raw) {

	this->_nb = raw;
}

int		Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_nb;
}

Fixed&	Fixed::operator=(Fixed const & oload) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = oload.getRawBits();
	return *this;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
};

Fixed::Fixed(void) : _nb(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}