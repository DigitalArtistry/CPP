/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 13:49:55 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "utils.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("X", 21, 42), _target("X") {

	if (LOG)
		std::cout << "Default RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {

	if (LOG)
		std::cout << "Default RobotomyRequestForm Created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) {

	if (LOG)
		std::cout << "Copy RobotomyRequestForm Constructor" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	if (LOG)
		std::cout << "RobotomyRequestForm " << getName() << " Destroyed" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm & src) {

	(void)src;
	return *this;
}

void		RobotomyRequestForm::execute(const Bureaucrat & executor) const {

	Form::checkExecute(executor);
	srand(time(NULL));
	if (rand()%2)
		std::cout << ft_embed(_target, GREEN) << "has been successfully Robotomized !" << std::endl;
	else
		std::cout << ft_embed(_target, RED) << "has unfortunatly been paralized, it's the risk of Robotomy..." << std::endl;
}