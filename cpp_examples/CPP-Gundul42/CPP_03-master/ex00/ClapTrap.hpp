/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:39:09 by graja             #+#    #+#             */
/*   Updated: 2022/02/12 15:14:41 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int					_hitpts;
		int					_energypts;
		int					_attckdmg;

	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap &cpy);
		~ClapTrap(void);
		
		ClapTrap	&operator=(const ClapTrap &ovr);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif
