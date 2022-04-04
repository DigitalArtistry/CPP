/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:19:33 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/01 19:08:12 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

private:

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& rhs);
	~FragTrap();

	FragTrap	&operator=(const FragTrap& rhs);

	void	attack(const std::string& target);
	void	highFivesGuys(void) const;
};

#endif