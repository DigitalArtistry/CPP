/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:12:50 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/26 18:52:13 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char **av) {

	Karen	girl;

	if (ac != 2) {
		std::cout << "Please add a second argument specifying the level of complaint" << std::endl;
		return 0;
	}

	girl.filter(av[1]);
	return 0;
}