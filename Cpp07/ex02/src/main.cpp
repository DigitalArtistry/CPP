/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:01:36 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/19 18:01:39 by lucisanc         ###   ########.fr       */
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