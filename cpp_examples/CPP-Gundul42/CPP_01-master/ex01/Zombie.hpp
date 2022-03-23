/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:36:27 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 13:52:27 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie(void);
		void		set_name(std::string name);
		void		announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
