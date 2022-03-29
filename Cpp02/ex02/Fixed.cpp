/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:55 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/29 16:26:54 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fxpt(0) {

	if (LOG)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {

	if (LOG)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
};

Fixed::Fixed(int const nb) : _fxpt(nb << _fract){

	if (LOG)
		std::cout << "Int constructor called" << std::endl;
	return;
};

Fixed::Fixed(float const f) : _fxpt((int)roundf(f * (1 << _fract))) {

	if (LOG)
		std::cout << "Float constructor called" << std::endl;
	return;
};

Fixed::~Fixed() {

	if (LOG)
		std::cout << "Destructor called" << std::endl;
}

// ASSIGNMENT OPERATOR 
Fixed	&Fixed::operator=(Fixed const & oload) {

	if (LOG)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &oload)
		this->_fxpt = oload.getRawBits();
	return *this;
}

// MIN / MAX FUNCTIONS OVERLOAD
Fixed	&Fixed::min(Fixed & n1, Fixed & n2) {

	if (LOG)
		std::cout << "Static int min fn called" << std::endl;
	if (n1 <= n2)
		return (n1);
	return (n2);
}

Fixed	&Fixed::max(Fixed & n1, Fixed & n2) {

	if (LOG)
		std::cout << "Static int max fn called" << std::endl;
	if (n1 >= n2)
		return (n1);
	return (n2);
}

const Fixed	&Fixed::min(Fixed const & n1, Fixed const & n2) {

	if (LOG)
		std::cout << "Static int const min fn called" << std::endl;
	if (n1 <= n2)
		return (n1);
	return (n2);
}

const Fixed	&Fixed::max(Fixed const & n1, Fixed const & n2) {

	if (LOG)
		std::cout << "Static int const max fn called" << std::endl;
	if (n1 >= n2)
		return (n1);
	return (n2);
}

// 4 INCREMENT/DECREMENT OPERATORS

Fixed 	&Fixed::operator++() {
	++(this->_fxpt);
	return (*this);
}

Fixed 	Fixed::operator++(int x) {
	Fixed old(*this);
	++(*this);
	return (old);
}

Fixed 	&Fixed::operator--() {
	--(this->_fxpt);
	return (*this);
}

Fixed 	Fixed::operator--(int x) {
	Fixed old(*this);
	--(*this);
	return (old);
}

// UTILS
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

// ostream operator overload
std::ostream	&operator<<(std::ostream &o, Fixed const & nbr){

	o << nbr.toFloat();
	return (o);
}
