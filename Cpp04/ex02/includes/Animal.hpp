/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:52:19 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/09 00:44:50 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define LOG 1

# include <iostream>
# include <string>

class Animal	{

private:
	Animal(void);

protected:
	std::string		_type;

public:
	Animal(const Animal & src);
	Animal(const std::string &type);
	virtual ~Animal();

	Animal	&operator=(const Animal & src);

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif
