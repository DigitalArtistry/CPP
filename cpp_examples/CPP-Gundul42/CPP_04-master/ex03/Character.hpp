/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:55:33 by graja             #+#    #+#             */
/*   Updated: 2022/02/22 12:35:19 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class	ICharacter;

class Character : public ICharacter
{
	private:
		AMateria*		_inventory[4];
		std::string const	_name;
		int				_idx;

	public:
		Character(void);
		Character(std::string const name);
		Character(Character const &cpy);
		~Character(void);

		Character&	operator=(Character const &right);

		std::string const &	 getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
