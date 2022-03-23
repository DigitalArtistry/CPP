/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:32:11 by graja             #+#    #+#             */
/*   Updated: 2022/02/22 14:23:47 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//Constructors
MateriaSource::MateriaSource (void)
{
	int	i;

	i = 0;
	this->_idx = -1;
	while (i < 4)
	{
		this->_sources[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const &right)
{
	*this = right;
}

//Destructor
MateriaSource::~MateriaSource(void)
{
	int	i;

	i = 0;
	while (i <= this->_idx)
	{
		delete this->_sources[i];
		i++;
	}
}

//Operator overload
MateriaSource& MateriaSource::operator=(MateriaSource const & right)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (right._sources[i])
			this->_sources[i] = right._sources[i];
		else
			this->_sources[i] = NULL;
		i++;
	}
	this->_idx = right._idx;
	return (*this);
}

//Method implementation from IMateriaSources interface
void MateriaSource::learnMateria(AMateria* cpy)
{
	if (this->_idx > 2)
	{
		std::cout << "***ERROR: ";
		std::cout << "Already know 4 Materia, memory overflow" << std::endl;
		delete cpy;
		return;
	}
	this->_idx++;
	this->_sources[this->_idx] = cpy;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = -1;
	while (i < this->_idx)
	{
		i++;
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	}
	std::cout << "*ERROR: unknown Materia" << std::endl;
	return (NULL);
}
