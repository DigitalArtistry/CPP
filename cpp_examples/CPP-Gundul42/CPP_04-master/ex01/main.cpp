/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:17:23 by graja             #+#    #+#             */
/*   Updated: 2022/02/22 15:23:09 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	int			max = 6;
	const Animal*	animals[max];
	int			i = 0;
	Cat			tiger;
	Cat			pussy;

	while (i < max / 2)
	{
		animals[i] = new Dog();
		i++;
	}
	while (i < max)
	{
		animals[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < max)
	{
		std::cout << animals[i]->makeSound() << std::endl;
		delete animals[i];
		i++;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "finish array test, now deep copy brainz" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << std::endl;
	tiger.setIdea(25, "I am so fucking hungry !");
	std::cout << "Tiger says : " << tiger.getIdea(25) << std::endl;
	std::cout << "Pussy says : " << pussy.getIdea(25) << std::endl;
	pussy = tiger;
	std::cout << "And now pussy says : " << pussy.getIdea(25) << std::endl;
	return (0);
}
