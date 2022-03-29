/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:55 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/28 20:34:47 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fxpt(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
};

Fixed::Fixed(int const nb) : _fxpt(nb << _fract){

	std::cout << "Int constructor called" << std::endl;
	return;
};

Fixed::Fixed(float const f) : _fxpt((int)roundf(f * (1 << _fract))) {

	std::cout << "Float constructor called" << std::endl;
	return;
};

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & oload) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &oload)
		this->_fxpt = oload.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const {

	return ((float)_fxpt / (1 << _fract));
}

int		Fixed::toInt(void) const {

	return ((int)(roundf((float)_fxpt / (1 << _fract))));
}

void	Fixed::setRawBits(int const raw) {

	this->_fxpt = raw;
}

int		Fixed::getRawBits(void) const {

	return this->_fxpt;
}

std::ostream	&operator<<(std::ostream &o, Fixed const & nbr){

	o << nbr.toFloat();
	return (o);
}
