/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:55:36 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 14:22:19 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(const WrongCat & src);
	~WrongCat();

	WrongCat	&operator=(const WrongCat & src);

	void	makeSound(void) const;
};

#endif