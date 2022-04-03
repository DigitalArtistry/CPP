/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:52:19 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 14:27:20 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define LOG 0

# include <iostream>
# include <string>

class Animal	{

protected:
	std::string		_type;

public:
	Animal(void);
	Animal(const Animal & src);
	Animal(const std::string &type);
	virtual ~Animal();

	Animal	&operator=(const Animal & src);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif
