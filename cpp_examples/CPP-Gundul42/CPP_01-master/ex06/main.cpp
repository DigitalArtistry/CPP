/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:17:52 by graja             #+#    #+#             */
/*   Updated: 2021/12/19 18:28:06 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen		mygirl;

	if (argc != 2)
	{
		std::cout << "Error: bad arguments" << std::endl;
		return (1);
	}
	mygirl.complain(argv[1]);
}
