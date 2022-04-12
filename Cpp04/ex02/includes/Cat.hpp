/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:55:36 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/09 00:43:04 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

private:
	Brain* _brain;

public:
	Cat(void);
	Cat(const Cat & src);
	virtual ~Cat();

	Cat		&operator=(const Cat & src);

	void	makeSound(void) const;
	void	showIdeas(int &nb) const;
};

#endif
