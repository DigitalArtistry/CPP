/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:56:08 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/11 19:18:53 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _nb(42) {

	if (LOG)
		std::cout << "Default Constructor" << std::endl;
}

Data::Data(int nb) : _nb(nb) {

	if (LOG)
		std::cout << "Assignment Constructor" << std::endl;
}

Data::Data(Data const &src) : _nb(src._nb) {

	if (LOG)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Data		&Data::operator=(Data const &src) {

	if (this != &src)
		this->_nb = src._nb;
	return (*this);
}

Data::~Data() {

	if (LOG)
		std::cout << "Data destructor called" << std::endl;
}

int		Data::getVal(void) const {

	return (_nb);
}
