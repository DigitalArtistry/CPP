/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:21:29 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/02 19:53:14 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define LOG 1
# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define YELLOW		"\x1B[33m"
# define BLUE		"\x1B[34m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"
# define PINK		"\033[38;5;200m"
# define ORANGE		"\033[38;5;208m"
# define PURPLE		"\033[38;5;55m"
# define MAROON		"\033[38;5;88m"
# define GRAY		"\033[38;5;248m"
# define GRAY2		"\033[38;5;241m"
# define END		"\033[0m"

// G - heal, O - hit, R - dead, B - attack

# include <iostream>
# include <iomanip>
# include <string>

class ClapTrap {

protected:
	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_damage;
	bool			_alive;

	void		_getStats(void) const;
	std::string	_printName(void) const;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap& rhs);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif