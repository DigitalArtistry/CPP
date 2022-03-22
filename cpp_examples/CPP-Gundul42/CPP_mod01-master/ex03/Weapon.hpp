/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:35:27 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 17:16:19 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <string>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string wname);
		~Weapon(void);

		void			setType(std::string name);
		std::string const	&getType(void) const;
};

#endif
