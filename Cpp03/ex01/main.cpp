/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:21:37 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 19:39:31 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(int ac, char **av) {

	(void)ac;
	
	{
		ClapTrap	clapTrap("c14pTr4p");
		ScavTrap	scavTrap("Sc4vTr4p");
		
		scavTrap.attack("random human");
		clapTrap.attack("random human");
		scavTrap.guardGate();
		scavTrap.takeDamage(30);
		scavTrap.beRepaired(10);
		scavTrap.takeDamage(50);
		scavTrap.takeDamage(30);
		scavTrap.takeDamage(10);
		scavTrap.beRepaired(1);
		scavTrap.attack("Mika");
	}
	{
		ScavTrap	scavTrap("Francis");

		for (int i = 0; i < 10; i++)
			scavTrap.attack("random human");
		scavTrap.beRepaired(10);
		scavTrap.attack("random human");
		scavTrap.takeDamage(100);
	}

	return 0;
}