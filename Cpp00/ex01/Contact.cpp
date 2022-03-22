/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:02:36 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/22 17:27:57 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::display_details( void ) const {

	std::cout << "\n-- Contact Details --" << std::endl;
	std::cout << "FIRST_NAME: " << first_name << std::endl;
	std::cout << "LAST_NAME: " << last_name << std::endl;
	std::cout << "NICKNAME: " << nickname << std::endl;
	std::cout << "PHONE_NUMBER: " << phone_number << std::endl;
	std::cout << "DARKEST_SECRET: " << darkest_secret << std::endl;
}

void	Contact::display_contact( int id ) const {
	
	std::string	temp;

	std::cout << "|" << std::setw(10) << id;
	if (this->first_name.length() > 10) {
		temp = this->first_name;
		temp.resize(9);
		std::cout << "|" << temp << ".";
	} else 
		std::cout << "|" << std::setw(10) << this->first_name;
	if (this->last_name.length() > 10) {
		temp = this->last_name;
		temp.resize(9);
		std::cout << "|" << temp << ".";
	} else 
		std::cout << "|" << std::setw(10) << this->last_name;
	if (this->nickname.length() > 10) {
		temp = this->nickname;
		temp.resize(9);
		std::cout << "|" << temp << ".";
	} else 
		std::cout << "|" << std::setw(10) << this->nickname;
	std::cout << "|\n" << std::endl;
}

void	Contact::add_contact( void ) {

	bool 		empty;
	std::string	tmp;

	empty = true;
	while (empty) {
		std::cout << "Please add your first name: " << "\n>";
		std::getline(std::cin, this->first_name);
		if ((empty = this->first_name.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	empty = true;
	while (empty) {
		std::cout << "Please add your last name: " << "\n>";
		std::getline(std::cin, this->last_name);
		if ((empty = this->last_name.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	empty = true;
	while (empty)
	{
		std::cout << "How about a nickname: " << "\n>";
		std::getline(std::cin, this->nickname);
		if ((empty = this->nickname.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	empty = true;
	while (empty)
	{
		std::cout << "I'll need your phone number: " << "\n>";
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
		std::cout << "Most importantly, your darkest secret: " << "\n>";
		std::getline(std::cin, this->darkest_secret);
		if ((empty = this->darkest_secret.empty()))
			std::cout << ORANGE << "I can't have empty fields" << NORMAL << std::endl;
	}
	return;
}