/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:18:34 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/26 18:22:54 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::_debug(void) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Karen::_info(void) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Karen::_warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::_error(void) {

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {

	void			(Karen::*fPtr[4])(void);
	std::string		option[4] = {"debug", "info", "warning", "error"};

	fPtr[0] = &Karen::_debug;
	fPtr[1] = &Karen::_info;
	fPtr[2] = &Karen::_warning;
	fPtr[3] = &Karen::_error;
	for (int i = 0; i < 4; ++i) {
		if (option[i] == level)
			(this->*fPtr[i])();
	}
}

Karen::Karen() {

	std::cout << "Constructor called" << std::endl;
}

Karen::~Karen() {

	std::cout << "Destructor called" << std::endl;
}