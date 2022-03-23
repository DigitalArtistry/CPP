/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:35:45 by graja             #+#    #+#             */
/*   Updated: 2022/03/14 12:54:05 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

static
void	printit(t_test *adr, int max)
{
	int	i = 0;
	while (i < max)
	{
		std::cout << i << ") " << adr << std::endl;
		std::cout << adr->name << ", " << adr->num << ", " << adr->val << std::endl;
		std::cout << std::endl;
		adr++;
		i++;
	}
}

static
void	here_test(t_test *adr)
{
	std::string	rnd[3] = {"Default", "Test", "Tak_ada"};
	std::cout << adr << " initialized." << std::endl;
	adr->name = rnd[rand() % 3];
	adr->num = rand() % 1000;
	adr->val = rand() % 2;
}

static
void	test(int *adr)
{
	static int	i = 0;

	std::cout << i << ") Called " << adr << " : " << *adr << std::endl;
	i++;
}

int	main(void)
{
	int			arr[5] = {12, 41, 33, 7, -12};
	float			far[5] = {9.31, 123.2, 19.923, 22.1, 0.8263};

	unsigned char	len = 5;
	t_test			arrhere[7];
	t_test			*here;
	int			here_len = 7;

	srand(time(NULL));
	iter(&(arr[0]), len, test);
	iter(&(arrhere[0]), here_len, here_test);
	printit(&(arrhere[0]), here_len);
	iter(&(arr[0]), len, ft_double);
	std::cout << std::endl << "Double check the new values:" << std::endl;
	iter(&(arr[0]), len, test);
	iter(&(far[0]), len, ft_parr); 
	return (0);
}
