/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:21:37 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/29 18:23:44 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void) {

	ClapTrap mika("mika");
	ClapTrap joe("joe");

	joe.attack("mika");
	mika.beRepaired(10);
	joe.takeDamage(10);

	return 0;
}