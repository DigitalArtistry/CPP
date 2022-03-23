/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:33:10 by graja             #+#    #+#             */
/*   Updated: 2022/02/20 16:40:30 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &wen);
		virtual ~AMateria(void);

		AMateria& operator=(const AMateria &right);

		std::string const &	getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void			use(ICharacter& target) = 0;
};

#endif
