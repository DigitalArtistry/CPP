/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:51:43 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/23 18:29:55 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	Zombie	*zombieHorde = new Zombie[N];

	for (int i = 0; i < N ; ++i) {
		zombieHorde[i].nameZombie(name);
		// zombieHorde[i].announce();
	}
	return zombieHorde;
}