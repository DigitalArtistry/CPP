/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:21:37 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 17:20:28 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(int ac, char **av) {

	(void)ac;

	DiamondTrap	diamondTrap("Inheritor");

	diamondTrap.whoAmI();
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.attack("random human");
	diamondTrap.takeDamage(20);
	diamondTrap.beRepaired(10);
	diamondTrap.takeDamage(100);

	return 0;
}