/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:48:33 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/23 18:28:35 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) {

	Zombie *zHoard = zombieHorde(10, "Rawwrrrr");

	delete [] zHoard;
	return 0;
}