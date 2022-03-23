/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:37:47 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/23 20:48:11 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main() {

	std::string theStr = "HI THIS IS BRAIN";
	std::string *stringPTR;

	stringPTR = &theStr;
	std::string &stringREF = theStr;

	std::cout << "address of theStr: " << &theStr << std::endl;
	std::cout << "address of *stringPTR: " << stringPTR << std::endl;
	std::cout << "address of stringREF: " << &stringREF << std::endl;
	std::cout << "\n";

	std::cout << "value of string variable: " << theStr << std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}