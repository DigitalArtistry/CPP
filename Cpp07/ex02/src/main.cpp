/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:00:02 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/18 11:50:10 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(int ac, char **av) {

	Array<unsigned int>	a;

	std::cout << a.getNb() << std::endl;

	return 0;
}