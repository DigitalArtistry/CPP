/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:55 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/27 12:21:12 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


void	Fixed::setNb(int nb) {

	this->_nb = nb;
}

int		Fixed::getNb() const {

	return this->_nb;
}

Fixed&	Fixed::operator=(Fixed const & x) {

	this->_nb = x.getNb();
	return *this;
}

Fixed	Fixed::operator+(Fixed const & x) const {

	Fixed temp;

	temp.setNb(this->_nb + x.getNb());
	return temp;
}

Fixed::Fixed(void) : _nb(0) {

	std::cout << "Constructor Called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor Called" << std::endl;
}