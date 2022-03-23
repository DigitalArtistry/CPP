/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:02:52 by graja             #+#    #+#             */
/*   Updated: 2022/02/13 10:53:59 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	test;
	FragTrap	lala("LaLa");
	FragTrap	lolo = test;

	test.attack("TestTrapper");
	lala.takeDamage(10);
	lala.beRepaired(9);
	lolo.takeDamage(13);
	lala.highFivesGuys();
	lolo.highFivesGuys();
	return (0);
}
