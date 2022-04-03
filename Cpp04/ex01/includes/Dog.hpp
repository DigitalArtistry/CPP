/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:00:28 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 18:04:35 by lucisanc         ###   ########.fr       */
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
	~Dog();

	Dog		&operator=(const Dog & src);

	void	makeSound(void) const;
	void	showIdeas(int &nb) const;
};

#endif