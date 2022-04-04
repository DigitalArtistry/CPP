/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:21:37 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/01 19:13:17 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(int ac, char **av) {

	(void)ac;

	FragTrap	fragTrap("fR4gTr4p");
	ScavTrap	scavTrap("Sc4vTr4p");
		
	scavTrap.attack("random human");
	scavTrap.guardGate();
	fragTrap.attack("random alien");
	fragTrap.highFivesGuys();
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(80);

	return 0;
}