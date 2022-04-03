/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 18:07:21 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

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
	{
		Cat i;
		int nbThoughts = 5;
		i.showIdeas(nbThoughts);
		std::cout << std::endl;
		
		Cat j;
		j.showIdeas(nbThoughts);
		std::cout << std::endl;

		j = i;
		j.showIdeas(nbThoughts);
		std::cout << std::endl;

		Dog e;
		Dog f(e);

		e.showIdeas(nbThoughts);
		std::cout << std::endl;
		f.showIdeas(nbThoughts);
	}
	return 0;
}