/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:51:22 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/22 14:32:23 by lucisanc         ###   ########.fr       */
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

void	PhoneBook::search( void ) {

	std::string	command;
	int			index;
	// if (this->amount < 1)
	// 	return;
	std::cout << "\n|" << "INDEX" << std::setw(6) << "|" << std::setw(10) << "FIRST NAME"
		<< "|" << std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << "|"<< std::endl;
	std::cout << "---------------------------------------------\n";
	for (int i = 0; i < this->amount; ++i) {
		contacts[i].display_contact(i);
	}
	command = ' ';
	while (command < "0" || command > "9") {
		std::cout << "Select the index you would like to display: " << "\n>";
		std::getline(std::cin, command);
		if (command < "0" || command > "9")
			std::cout << ORANGE << "That is not a number, try again" << NORMAL << std::endl;
	}
	const char *cstr = command.c_str();
	index = std::atoi(cstr);
	if (index < 0 || index > this->amount - 1) {
		std::cout << ORANGE << "That index is not assigned.\n" << NORMAL << std::endl;
		return;
	}
	contacts[index].display_details();
	std::cout << "\n";
}

PhoneBook::PhoneBook() {

	std::cout << GREEN << "Phonebook created!\n" << NORMAL << std::endl;
	this->amount = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook() {

	std::cout << RED << "Phonebook destroyed\n" << NORMAL << std::endl;
}
