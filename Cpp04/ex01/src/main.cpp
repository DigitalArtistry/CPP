/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/18 21:11:55 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

static void testDeepCopy(void)
{
	std::cout << "**************DEEP COPY**************" << std::endl;;
	Dog	dog1;
	int	nbIdeas = 5;

	dog1.showIdeas(nbIdeas);
	{
		Dog	dog2 = dog1;
		dog2.showIdeas(nbIdeas);
	}
	dog1.showIdeas(nbIdeas);

	std::cout << std::endl;

	Cat	cat1;
	cat1.showIdeas(nbIdeas);
	{
		Cat	cat2(cat1);
		cat2.showIdeas(nbIdeas);
	}
	cat1.showIdeas(nbIdeas);
}

int		main() {

	srand((unsigned int)time(NULL));
	{
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		i->makeSound();
		j->makeSound();
		delete i;
		delete j;
	}
	std::cout << std::endl;
	{
		const Animal* herd[10];

		for (int i = 0; i < 10; i++) {
			if (i < 5)
				herd[i] = new Cat();
			else
				herd[i] = new Dog();
		}

		for (int i = 0; i < 10; i++) {
			herd[i]->makeSound();
			delete herd[i];
		}
	}
	std::cout << std::endl;
	testDeepCopy();
	return 0;
}