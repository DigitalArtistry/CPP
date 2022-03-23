/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:57:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 19:40:54 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Dog: public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(const Dog &cpy);
		virtual ~Dog(void);

		virtual Dog&	operator=(const Dog &ovr);

		virtual std::string	makeSound(void) const;
		virtual std::string	getIdea(int n);
		virtual void			setIdea(int n, std::string mem);
};

#endif
