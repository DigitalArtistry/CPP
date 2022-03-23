/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:39:09 by graja             #+#    #+#             */
/*   Updated: 2022/02/16 13:52:52 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(const FragTrap &cpy);
		~FragTrap(void);
		
		FragTrap	&operator=(const FragTrap &ovr);

		void	highFivesGuys(void);

	protected:
		void	setHitPoints(void);
		void	setAttackDamage(void);
};

#endif
