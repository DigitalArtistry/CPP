/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:44:30 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 17:37:30 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon			&_weapon;

	public:
		HumanA(std::string name, Weapon &wtype);
		~HumanA(void);

		void	attack(void);
};

#endif
