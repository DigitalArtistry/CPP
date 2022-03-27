/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:12:50 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/26 18:22:03 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char **av) {

	(void)ac;
	Karen	girl;

	std::cout << "debug: ";
	girl.complain("debug");
	std::cout << std::endl;

	std::cout << "info: ";
	girl.complain("info");
	std::cout << std::endl;

	std::cout << "warning: ";
	girl.complain("warning");
	std::cout << std::endl;

	std::cout << "error: ";
	girl.complain("error");
	std::cout << std::endl;
	
	return 0;
}