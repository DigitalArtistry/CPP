/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:02:36 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/21 21:03:12 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::display_contact( void ) {
	std::cout << this->first_name;
}

void	Contact::add_contact( void ) {

	bool 		empty;
	std::string	tmp;

	empty = true;
	while (empty) {
		std::cout << "Please add your first name: " << std::endl;
		std::getline(std::cin, this->first_name);
		if ((empty = this->first_name.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	empty = true;
	while (empty) {
		std::cout << "Please add your last name: " << std::endl;
		std::getline(std::cin, this->last_name);
		if ((empty = this->last_name.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	empty = true;
	while (empty)
	{
		std::cout << "How about a nickname: " << std::endl;
		std::getline(std::cin, this->nickname);
		if ((empty = this->nickname.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	empty = true;
	while (empty)
	{
		std::cout << "I'll need your phone number: " << std::endl;
		std::getline(std::cin, tmp);
		if ((empty = tmp.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
		else {
			const char *number = tmp.c_str();
			this->phone_number = atol(number);
		}
	}
	empty = true;
	while (empty)
	{
		std::cout << "Most importantly, your darkest secret: " << std::endl;
		std::getline(std::cin, this->darkest_secret);
		if ((empty = this->darkest_secret.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	return;
}