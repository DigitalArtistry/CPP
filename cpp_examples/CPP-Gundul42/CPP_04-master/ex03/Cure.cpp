/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:33:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/22 14:22:06 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//Constructors
Cure::Cure(void) : AMateria("cure")
{}

Cure::Cure(Cure const &wen) : AMateria(wen)
{
	*this = wen;
}

//Destructor
Cure::~Cure(void)
{}

//Operator overload
Cure&	Cure::operator=(const Cure &right)
{
	this->_type = right._type;
	return (*this);
}

//Methods
Cure*	Cure::clone(void) const
{
	Cure*	bck = new Cure;

	*bck = *this;
	return (bck);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "*heals " << target.getName() <<"'s wounds" << std::endl;
}
