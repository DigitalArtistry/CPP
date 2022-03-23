/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:06:07 by graja             #+#    #+#             */
/*   Updated: 2022/02/22 14:05:51 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//Constructors
AMateria::AMateria(void) : _type("")
{}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const &wen)
{
	*this = wen;
}

//Destructor is virtual to be polymorph !
AMateria::~AMateria(void)
{}

//Operator overload
AMateria& AMateria::operator=(const AMateria &right)
{
	this->_type = right._type;
	return (*this);
}

//Methods
std::string const & AMateria::getType(void) const
{
	return (this->_type);
}
