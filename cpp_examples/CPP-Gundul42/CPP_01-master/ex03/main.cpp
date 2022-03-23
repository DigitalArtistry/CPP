/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:20:28 by graja             #+#    #+#             */
/*   Updated: 2021/12/19 12:15:38 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("huge club with spikes");
		HumanA	john = HumanA("John", club);
	
		john.attack();
		club.setType("brand new machine gun");
		john.attack();
	}
	{
		Weapon	club = Weapon("huge club with spikes");
		HumanB	pitt = HumanB("Pitt");
	
		pitt.setWeapon(club);
		pitt.attack();
		club.setType("brand new machine gun");
		pitt.attack();
	}
}
