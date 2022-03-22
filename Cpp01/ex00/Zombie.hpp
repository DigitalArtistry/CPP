/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:58:09 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/22 16:30:23 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie {

private:
	std::string	_name;

public:
	Zombie(std::string name);
	virtual	~Zombie(void);

	void	announce(void);
};

// Zombie	*newZombie(std::string name);
// void	randomChump(std::string name);

#endif