/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:33:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/22 14:21:57 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//Constructors
Ice::Ice(void) : AMateria("ice")
{}

Ice::Ice(Ice const &wen) : AMateria(wen)
{
	*this = wen;
}

//Destructor
Ice::~Ice(void)
{}

//Operator overload
Ice&	Ice::operator=(const Ice &right)
{
	this->_type = right._type;
	return (*this);
}

//Methods
Ice*	Ice::clone(void) const
{
	Ice*	cpy = new Ice();

	*cpy = *this;
	return (cpy);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() << std::endl;
}
