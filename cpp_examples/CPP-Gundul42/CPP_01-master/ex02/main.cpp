/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:27:10 by graja             #+#    #+#             */
/*   Updated: 2021/12/18 14:57:06 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	name = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = name;

	stringPTR = &name;
	std::cout << "Adress of string: " << &name << std::endl;
	std::cout << "Adress of PTR   : " << stringPTR << std::endl;
	std::cout << "Adress of REF   : " << &stringREF << std::endl;
	std::cout << "string          : " << name << std::endl;
	std::cout << "StringPTR       : " << *stringPTR << std::endl;
	std::cout << "StringREF       : " << stringREF << std::endl;
	return (0);
}
