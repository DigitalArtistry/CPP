/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:22:26 by graja             #+#    #+#             */
/*   Updated: 2022/02/22 14:21:02 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource;
	ICharacter*	me = new Character("me");
	ICharacter*	bob = new Character("bob");
	AMateria*		tmp;

	std::cout << std::endl;
	std::cout << "Default interface working tests starting:" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	tmp = src->createMateria("ice");
	if (tmp)
		me->equip(tmp);
	tmp = src->createMateria("cure");
	if (tmp)
		me->equip(tmp);
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	tmp = src->createMateria("ices");
	if (tmp)
		bob->equip(tmp);
	bob->use(0, *me);
	delete bob;
	delete me;
	delete src;
	std::cout << std::endl;
	std::cout << "Character copy tests starting here, deep copies:" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	//do deep copy tests
	Character	bobo("Bobo");
	Character	momo("Momo");

	bobo.equip(new Ice);
	bobo.equip(new Cure);
	momo.equip(new Cure);
	momo.equip(new Cure);
	momo.equip(new Cure);
	momo.equip(new Cure);
	momo = bobo;
	momo.use(1, bobo);
	momo.use(0, bobo);
	momo.use(2, bobo);
	momo.use(3, bobo);
	return 0;
}
