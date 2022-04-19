/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:00:02 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/19 17:43:56 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>
#include <string>

class	Example {

public:
	Example( size_t nb = 42) : _nb(nb) { return; }
	size_t	getNb(void) {return _nb; }
private:
	size_t	_nb;
};

std::ostream &	operator<<(std::ostream &o, Example &y) {
	o << y.getNb();
	return o;
}

int		main(int ac, char **av) {

	int	intArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string strArr[] = {"trois", "std", "string"};
	Example		classArr[] = {101, 102, 103};

	std::cout << "intArr: " << std::endl;
	iter(intArr, 10, p_elem<int>); std::cout << std::endl;

	std::cout << "charArr: " << std::endl;
	iter(charArr, 5, p_elem<char>); std::cout << std::endl;

	std::cout << "strArr: " << std::endl;
	iter(strArr, 3, p_elem<std::string>); std::cout << std::endl;

	std::cout << "classArr: " << std::endl;
	iter(classArr, 3, p_elem<Example>); std::cout << std::endl;

	return 0;
}