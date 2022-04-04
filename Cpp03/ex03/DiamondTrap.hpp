/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:59:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 19:59:31 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap {

private:
	std::string	_name;
	DiamondTrap(void);

public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& src);
	~DiamondTrap();

	DiamondTrap	&operator=(const DiamondTrap& src);

	void whoAmI(void) const;
	using	ScavTrap::attack;
};

#endif