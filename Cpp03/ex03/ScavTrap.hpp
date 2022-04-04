/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:19:33 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/01 19:03:14 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

private:

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& rhs);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap& rhs);

	void	attack(const std::string& target);
	void	guardGate(void) const;
};

#endif