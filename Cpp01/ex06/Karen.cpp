/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:18:34 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/27 10:58:48 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::_debug(void) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-" << std::endl;
	std::cout << "special-ketchup burger.I really do!\n" << std::endl;
}

void	Karen::_info(void) {

	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Karen::_warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Karen::_error(void) {

	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Karen::filter(std::string level) {

	void				(Karen::*fPtr[4])(void);
	std::string const	option[4] = {"debug", "info", "warning", "error"};
	enum				optionSwitch {debug, info, warning, error};
	size_t				i;

	fPtr[0] = &Karen::_debug;
	fPtr[1] = &Karen::_info;
	fPtr[2] = &Karen::_warning;
	fPtr[3] = &Karen::_error;
	i = 0;
	while (i < 4 && option[i] != level)
		++i;
	switch (i) {
		case debug: std::cout << "[ DEBUG ]" << std::endl;
			(this->*fPtr[0])();
		case info: std::cout << "[ INFO ]" << std::endl;
			(this->*fPtr[1])();
		case warning: std::cout << "[ WARNING ]" << std::endl;
			(this->*fPtr[2])();
		case error: std::cout << "[ ERROR ]" << std::endl;
			(this->*fPtr[3])();
			break;
		default: std::cout << "[ Probably complaining about insigninficant problems ]" << std::endl;
	}
	
}

Karen::Karen() {

	// std::cout << "Constructor called" << std::endl;
}

Karen::~Karen() {

	// std::cout << "Destructor called" << std::endl;
}