/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:14:38 by praclet           #+#    #+#             */
/*   Updated: 2021/05/02 08:17:59 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	{
		Array<int> const tab;

		std::cout << "Size: " << tab.size() << std::endl;
		try
		{
			std::cout << "tab[0]: ";
			std::cout << tab[0];
			std::cout << std::endl;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "tab[50]: ";
			std::cout << tab[50];
			std::cout << std::endl;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "********* " << __LINE__ << std::endl;
	{
		Array<float> const tab(30);

		std::cout << "Size: " << tab.size() << std::endl;
		try
		{
			std::cout << "tab[0] : " << tab[0] << std::endl;
			std::cout << "tab[15]: " << tab[15] << std::endl;
			std::cout << "tab[28]: " << tab[28] << std::endl;
			std::cout << "tab[29]: " << tab[29] << std::endl;
			std::cout << "tab[30]: " << tab[30] << std::endl;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "********* " << __LINE__ << std::endl;
	{
		Array<int> tab(6);

		std::cout << "Size: " << tab.size() << std::endl;
		for (unsigned int i=0;i < tab.size();i++)
			tab[i] = i + 1;
		for (unsigned int i=0;i < tab.size();i++)
			std::cout << "tab[" << i << "] : " << tab[i] << std::endl;
	}
	std::cout << "********* " << __LINE__ << std::endl;
	{
		Array<int> tab(10);

		std::cout << "Size: " << tab.size() << std::endl;
		for (unsigned int i=0;i < tab.size();i++)
			tab[i] = i + 1;

		Array<int> tab1(tab);
		std::cout << "Size: " << tab1.size() << std::endl;
		for (unsigned int i=0;i < tab1.size();i++)
			std::cout << "tab1[" << i << "] : " << tab1[i] << std::endl;
	}
	std::cout << "********* " << __LINE__ << std::endl;
	{
		Array<int> tab0(10);
		Array<int> tab1(5);

		std::cout << "Size: " << tab0.size() << std::endl;
		std::cout << "Size: " << tab1.size() << std::endl;
		for (unsigned int i=0;i < tab0.size();i++)
		{
			tab0[i] = 2 * i;
			std::cout << "tab0[" << i << "] : " << tab0[i] << std::endl;
		}
		for (unsigned int i=0;i < tab1.size();i++)
		{
			tab1[i] = 3 * i;
			std::cout << "tab1[" << i << "] : " << tab1[i] << std::endl;
		}
		tab0 = tab1;
		for (unsigned int i=0;i < tab0.size();i++)
		{
			tab0[i] = 2 * i;
			std::cout << "tab0[" << i << "] : " << tab0[i] << std::endl;
		}
	}
	std::cout << "********* " << __LINE__ << std::endl;
	{
		Array<std::string> tab(5);

		tab[0] = "Zero";
		tab[1] = "Un";
		tab[2] = "Deux";
		tab[3] = "Trois";
		tab[4] = "Quatre";
		for (unsigned int i=0;i < tab.size();i++)
			std::cout << "tab[" << i << "] : '" << tab[i] << "'" << std::endl;
	}
	std::cout << "********* " << __LINE__ << std::endl;
	{
		Array<Array<int> > tab(3);
		Array<int> tmp(5);
		Array<int> tmp1(3);

		for (unsigned int i=0;i < tmp.size();i++)
			tmp[i] = 8 * i + 5;
		tab[0] = tmp;
		for (unsigned int i=0;i < tmp.size();i++)
			tmp[i] = 5 * i + 8;
		tab[1] = tmp;
		for (unsigned int i=0;i < tmp1.size();i++)
			tmp1[i] = i + 10;
		tab[2] = tmp1;
		
		for (unsigned int i=0;i < tab.size();i++)
			for (unsigned int j=0;j < tab[i].size();j++)
				std::cout << "tab[" << i << "][" << j << "] : '" << tab[i][j] << "'" << std::endl;
	}
	/*
	std::cout << "********* " << __LINE__ << std::endl;
	{

		Array<std::string> const tab(5);

		tab[0] = "Zero";
	}
	*/
}
