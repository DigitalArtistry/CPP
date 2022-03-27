/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:01:03 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/24 15:10:50 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

private:
	std::string	_type;

public:
	std::string const	&getType(void);
	void 	setType(std::string type);

	Weapon(std::string type);
	~Weapon(void);
};

#endif