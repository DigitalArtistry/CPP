/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:55:46 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/11 18:55:51 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		validArg(int &ac, char **av) {

	if (ac != 2) {
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return 1;
	}
	else if (av[1][0] == '\0') {
		std::cerr << "Error: Empty Argument" << std::endl;
		return 2;
	}
	return 0;
}

int		main(int ac, char **av) {

	std::string		s;

	if (validArg(ac, av) != 0)
		return (0);
	s = av[1];
	Convert a(s);

	return 0;
}