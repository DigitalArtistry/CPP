/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:39:09 by graja             #+#    #+#             */
/*   Updated: 2022/02/16 17:13:46 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	protected:
		void	setEnergyPoints(void);

	public:
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap(void);
		
		ScavTrap	&operator=(const ScavTrap &ovr);

		void	guardGate(void);
		void	attack(std::string const &target);
};

#endif
