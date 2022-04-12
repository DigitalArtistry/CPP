/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:00:28 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/09 00:41:00 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

private:
	Brain* _brain;

public:
	Dog(void);
	Dog(const Dog & src);
	virtual ~Dog();

	Dog		&operator=(const Dog & src);

	void	makeSound(void) const;
	void	showIdeas(int &nb) const;
};

#endif