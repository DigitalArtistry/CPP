/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:55:36 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 14:27:25 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

public:
	Cat(void);
	Cat(const Cat & src);
	~Cat();

	Cat		&operator=(const Cat & src);

	void	makeSound(void) const;
};

#endif
