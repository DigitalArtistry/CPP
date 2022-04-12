/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:56:06 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/12 16:57:56 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classConv.hpp"

Base *	generate(void) {

	srand(time(NULL));
	int 	i;

	i = std::rand() % 3;
	switch (i) {
		case 0:
			return (new A);
			break;
		case 1:
			return (new B);
			break;
	}
	return (new C);
}

void	identify(Base * p) {

	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base & p) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

int		main(void) {

	Base *	base;

	if ((base = generate()) == NULL)
		return (0);
	std::cout << "Pointer : ";
	identify(base);
	std::cout << "Reference : ";
	identify(*base);

	delete base;
	return 0;
}