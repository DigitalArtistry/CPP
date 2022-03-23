/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:23:57 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 14:02:11 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	Zombie	*single;
	int		i;
	std::string	newname;

	i = 0;
	single = horde;
	while (i < N)
	{
		newname = name;
		single->set_name(newname.append(std::to_string(i + 1)));
		single->announce();
		single++;
		i++;
	}
	return (horde);
}
