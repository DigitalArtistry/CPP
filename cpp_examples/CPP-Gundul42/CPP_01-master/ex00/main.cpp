/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:49:57 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 11:43:40 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	boss = Zombie("Stack");
	Zombie	*test;

	test = newZombie("Heap");
	randomChump("Chump");
	delete test;
	return (0);
}
