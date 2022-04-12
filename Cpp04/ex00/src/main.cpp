/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/09 00:34:52 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main() {

	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		dog->makeSound();
		cat->makeSound();
		animal->makeSound();

		delete animal;
		delete dog;
		delete cat;
	}
	std::cout << "\nCheck wrong animals\n" << std::endl;
	{
		const WrongAnimal* wAnimal = new WrongAnimal();
		const WrongAnimal* wCat = new WrongCat();

		std::cout << wCat->getType() << std::endl;
		wCat->makeSound();
		wAnimal->makeSound();

		const WrongCat*	wrongCat = new WrongCat();
		wrongCat->makeSound();

		delete wAnimal;
		delete wCat;
		delete wrongCat;
	}
	return 0;
}