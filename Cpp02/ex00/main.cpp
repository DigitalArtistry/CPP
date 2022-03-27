/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:07:53 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/27 12:21:27 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main() {

	Fixed	nb;
	Fixed	nb2;
	Fixed	nb3;

	nb.setNb(6);
	nb2 = nb;
	std::cout << nb2.getNb() << std::endl;

	nb3 = nb + nb2;
	std::cout << nb3.getNb() << std::endl;
}