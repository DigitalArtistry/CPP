/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:32:17 by lle-briq          #+#    #+#             */
/*   Updated: 2022/04/08 19:54:14 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Use ./convert litteralValue" << std::endl;
		return (1);
	}

	Conversion	conv(argv[1]);
	std::cout << conv;
	return (0);
}
