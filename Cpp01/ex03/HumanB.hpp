/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:10:11 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/24 15:16:17 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {

private:
	std::string	_name;
	Weapon		 *_weapon;

public:
	void	attack(void);
	void	setWeapon(Weapon &weapon);

	HumanB(std::string name);
	~HumanB();

};

#endif