/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:51:44 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/03 17:57:47 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::stringstream	out;
	std::string sym = "!@#$%^&*()";

	if (LOG)
		std::cout << "Default Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++) {
		out << i+1;
		ideas[i].append(out.str());
		ideas[i].append(" sheep...");
		ideas[i] += sym[std::rand() % sym.size()];
		out.str("");
		out.clear();
	}
}

Brain::Brain(const Brain & src) {

	std::stringstream	out;

	if (LOG)
		std::cout << "Copy Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++) {
		out << i+1;
		ideas[i].append(out.str());
		ideas[i].append(" sheep...");
		out.str("");
		out.clear();
	}
	*this = src;
}

Brain::~Brain() {

	if (LOG)
		std::cout << "Brain Destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain & src) {

	if (this != &src) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = src.ideas[i];
		}
	}
	return *this;
}

void	Brain::showIdeas(int &nb) const {

	if (nb > 100) {
		std::cout << "Don't have more than 100 ideas" << std::endl;
		return;
	}
	for (int i = 0; i < nb; i++) {
		std::cout << ideas[i] << std::endl;
	}
}