/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:17:23 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 13:42:45 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal			*qm = new Animal();
	const Animal			*a = new Cat();
	const Animal			*b = new Dog();
	const WrongAnimal	*c = new WrongCat();
	const WrongCat		*d = new WrongCat();

	std::cout << qm->getType() << " makes " << qm->makeSound() << std::endl;
	std::cout << a->getType() << " makes " << a->makeSound() << std::endl;
	std::cout << b->getType() << " makes " << b->makeSound() << std::endl;
	std::cout << c->getType() << " makes " << c->makeSound() << std::endl;
	std::cout << d->getType() << " makes " << d->makeSound() << std::endl;

	delete a;
	delete b;
	delete c;
	delete d;
	delete qm;
	return (0);
}
