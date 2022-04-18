/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:00:02 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/18 14:36:41 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void) {

	Array<unsigned int>	a;
	Array<unsigned int>	b(12);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return 0;
}