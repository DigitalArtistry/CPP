/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:35:45 by graja             #+#    #+#             */
/*   Updated: 2022/03/09 11:02:21 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.hpp"

int	main(void)
{
	int	a = 12;
	int	b = 124;

	std::cout << "Int value max: " << ftmax(a,b) << std::endl;
	std::cout << "Int value min: " << ftmin(a,b) << std::endl;
	std::cout << "Int value    : " << a << ", " << b << std::endl;
	ftswap(a,b);
	std::cout << "Int value swp: " << a << ", " << b << std::endl;
	std::cout << "---------------------------------" << std::endl << std::endl;
	
	float	c = 12.3;
	float	d = 124.12;

	std::cout << "Float value max: " << ftmax(c, d) << std::endl;
	std::cout << "Float value min: " << ftmin(c, d) << std::endl;
	std::cout << "Float value    : " << c << ", " << d << std::endl;
	ftswap(c, d);
	std::cout << "Float value swp: " << c << ", " << d << std::endl;
	std::cout << "---------------------------------" << std::endl << std::endl;
	
	std::string	e = "test";
	std::string	f = "longer";
	std::cout << "String value max: " << ftmax(e, f) << std::endl;
	std::cout << "String value min: " << ftmin(e, f) << std::endl;
	std::cout << "String value    : " << e << ", " << f << std::endl;
	ftswap(e, f);
	std::cout << "String value swp: " << e << ", " << f << std::endl;
	std::cout << "---------------------------------" << std::endl << std::endl;
}
