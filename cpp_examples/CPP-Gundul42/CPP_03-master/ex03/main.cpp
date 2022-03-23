/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:02:52 by graja             #+#    #+#             */
/*   Updated: 2022/02/17 10:05:47 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	test;
	DiamondTrap	lala("LaLa");
	DiamondTrap	kuemmel(test);

	//attack method overloaded by ScavTrap
	lala.attack("LOLO");
	test.attack("TestTrapper");

	//methods from ClapTrap
	lala.beRepaired(20);
	kuemmel.takeDamage(10);

	//method ScavTrap
	test.guardGate();

	//method FragTrap
	test.highFivesGuys();

	//method DiamondTrap
	test.whoAmI();
	lala.whoAmI();

	//operator overload for =
	test = lala;

	//check if it works
	test.whoAmI();
	std::cout << "--------------------------------------------";
	std::cout << std::endl << std::endl;
	return (0);
}
