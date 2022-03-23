/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:51:54 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/23 18:28:20 by lucisanc         ###   ########.fr       */
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
	Zombie(void);
	virtual	~Zombie(void);

	void	nameZombie(std::string name);
	void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif