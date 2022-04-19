/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:55:36 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/18 21:07:16 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <ctime>
# include <cstdlib>
# include "Animal.hpp"

class Brain {

protected:
	std::string	ideas[100];

public:
	Brain(void);
	Brain(const Brain & src);
	~Brain();

	Brain			&operator=(const Brain & src);

	virtual void	showIdeas(int &nb) const;
};

#endif
