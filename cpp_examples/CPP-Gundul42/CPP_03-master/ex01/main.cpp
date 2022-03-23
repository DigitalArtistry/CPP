/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:02:52 by graja             #+#    #+#             */
/*   Updated: 2022/02/13 10:56:26 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	test;
	ScavTrap	lala("LaLa");
	ScavTrap	lolo = test;

	test.attack("TestTrapper");
	lala.takeDamage(10);
	lala.beRepaired(9);
	lolo.takeDamage(13);
	lala.guardGate();
	lolo.guardGate();
	return (0);
}
