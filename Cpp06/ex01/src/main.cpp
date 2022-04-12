/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:56:06 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/11 19:25:27 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data*		deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data *>(raw));
}

uintptr_t	serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

int		main(int ac, char **av) {

	uintptr_t		serialized;
	Data*			deserialized;

	deserialized = new Data;
	std::cout << "Value of deserialized: " << deserialized->getVal() << std::endl;
	std::cout << "Pointer deserialized: " << deserialized << std::endl;
	
	serialized = serialize(deserialized);

	Data		a(21);
	Data*		re = &a;
	std::cout << "Value of re: " << re->getVal() << std::endl;

	re = deserialize(serialized);
	std::cout << "Pointer re-serialized: " << re << std::endl;
	
	std::cout << "Value of re-serialized: " << re->getVal() << std::endl;

	delete deserialized;
	return 0;
}