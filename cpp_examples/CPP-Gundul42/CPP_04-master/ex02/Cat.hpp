/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:57:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/19 09:17:32 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Cat: public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(const Cat &cpy);
		virtual ~Cat(void);

		Cat&	operator=(const Cat &ovr);

		virtual std::string	makeSound(void) const;
		virtual std::string	getIdea(int n);
		virtual void			setIdea(int n, std::string mem);
};

#endif
