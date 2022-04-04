/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/04 17:59:53 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("X"), _grade(42) {

	if (LOG)
		std::cout << "Default Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const size_t &grade) : _name(name) _grade(grade) {

	if (LOG)
		std::cout << "Default Bureaucrat " << _name << " Created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) {

	if (LOG)
		std::cout << "Copy Bureaucrat Constructor" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat() {

	if (LOG)
		std::cout << "Bureaucrat " << _name << " Destroyed" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat & src) {

	if (this != &src) {
		this->_name = src._name;
		this->_grade = src._grade;
	}
	return *this;
}

// Bureaucrat::GradeTooHighException()	{

// 	gtooHigh();
// }

// Bureaucrat::GradeTooLowException()	{

// 	gtooLow();
// }

std::string		Bureaucrat::getName(void) const {

	return (_name);
}

size_t			Bureaucrat::getGrade(void) const {

	return (_grade);
}
