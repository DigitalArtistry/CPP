/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:51:22 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/21 21:10:28 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	PhoneBook::add( void ) {

	Contact newcontact;
	
	newcontact.add_contact();
	if (amount == 8) {
		if (index == 8)
			index = 0;
		contacts[index++] = newcontact;
	} else {
		contacts[amount++] = newcontact;
		index++;
	}
	std::cout << GREEN << "Contact added!\n" << NORMAL;
	return;
}

PhoneBook::PhoneBook() {

	std::cout << "Phonebook created!\n" << std::endl;
	this->amount = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook() {

	std::cout << "Phonebook destroyed\n" << std::endl;
}
