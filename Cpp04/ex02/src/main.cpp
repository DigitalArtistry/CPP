/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 18:21:23 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int		main() {

	srand((unsigned int)time(NULL));
	{
		// Animal animal;

		Cat 	cat;
		Dog		dog;

		cat.makeSound();
		dog.makeSound();
	}
	return 0;
}