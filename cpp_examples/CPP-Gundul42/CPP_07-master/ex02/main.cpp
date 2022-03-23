/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:35:45 by graja             #+#    #+#             */
/*   Updated: 2022/03/13 14:06:24 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<int>	test(10);
	Array<int>	cpy(500);
	int			i = 0;

	std::cout << "-------------------------------------------------------";
	std::cout << std::endl << "Test with Int:" << std::endl << std::endl;
	std::cout << " test members: " << test.size() << " - cpy members: ";
	std::cout << cpy.size() << std::endl;
	cpy = test;
	test[5] = 123;
	test[9] = 100;
	test[1] = 10;
	while (i < 10)
	{
		std::cout << i << ") " << test[i] << "\t\t" << cpy[i];
		std::cout << "\tmembers: "<< cpy.size() << std::endl;
		i++;
	}
	std::cout << "-------------------------------------------------------";
	std::cout << std::endl << "Test with Float:" << std::endl << std::endl;
	Array<float>	test1(10);

	i = 0;
	test1[5] = 3.7;
	test1[9] = 0.1;
	test1[1] = 10.9;
	Array<float>	cpy1(test1);
	while (i < 10)
	{
		std::cout << i << ") " << test1[i] << "\t\t" << cpy1[i];
		std::cout << "\tmembers: "<< cpy1.size() << std::endl;
		i++;
	}
	std::cout << "-------------------------------------------------------";
	std::cout << std::endl << "Test with String:" << std::endl << std::endl;
	Array<std::string>	test2(10);
	Array<std::string>	cpy2(40);

	i = 0;
	test2[1] = "Check";
	test2[7] = "this";
	test2[9] = "out !";
	cpy2 = test2;
	while (i < 10)
	{
		std::cout << i << ") " << test2[i] << "\t\t" << cpy2[i];
		std::cout << "\tmembers: "<< cpy2.size() << std::endl;
		i++;
	}
	std::cout << "-------------------------------------------------------";
	std::cout << std::endl << "Out of range tests:" << std::endl << std::endl;
	try
	{
		test2[-1] = "Test";
	}
	catch (std::exception &e)
	{
		std::cout << "Test with [-1] : " << e.what() << std::endl;
	}
	try
	{
		test2[10] = "Test";
	}
	catch (std::exception &e)
	{
		std::cout << "Test with [10] : " << e.what() << std::endl;
	}
	try
	{
		test2[0] = "Test";
	}
	catch (std::exception &e)
	{
		std::cout << "Test with [10] : " << e.what() << std::endl;
	}
	return (0);
}
