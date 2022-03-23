/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:21:02 by graja             #+#    #+#             */
/*   Updated: 2022/02/21 13:46:46 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int			_idx;
		AMateria*	_sources[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & cpy);
		~MateriaSource(void);

		MateriaSource&	operator=(MateriaSource const & right);

		void learnMateria(AMateria* cpy);
		AMateria* createMateria(std::string const & type);
};

#endif
