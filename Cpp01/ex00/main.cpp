/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:02:23 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/23 11:41:18 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int		main(void) {

	Zombie* marta = newZombie("Marta");
	randomChump("Frank");

	delete marta;
}