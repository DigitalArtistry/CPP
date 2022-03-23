/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:44:30 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 17:58:38 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMBNB_HPP
# define HUMBNB_HPP
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &newweapon);
};

#endif
