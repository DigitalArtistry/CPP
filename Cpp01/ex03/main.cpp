/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:19:14 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/24 15:19:47 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main() {
{
	Weapon club = Weapon("spiked club");

	HumanA fritz("Fritz", club);
	fritz.attack();
	club.setType("crossbow");
	fritz.attack();
}
{
	Weapon club = Weapon("spiked club");

	HumanB covaks("Covaks");
	covaks.setWeapon(club);
	covaks.attack();
	club.setType("nunchuks");
	covaks.attack();
}
	return 0;
}