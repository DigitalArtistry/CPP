/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:52:19 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 14:18:32 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# define LOG 0

# include <iostream>
# include <string>

class WrongAnimal	{

protected:
	std::string		_type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal & src);
	WrongAnimal(const std::string &type);
	virtual ~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal & src);

	void			makeSound(void) const;
	std::string		getType(void) const;
};

#endif