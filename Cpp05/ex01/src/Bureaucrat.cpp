/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/19 17:01:02 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "utils.hpp"

Bureaucrat::Bureaucrat(void) : _name("X"), _grade(42) {

	if (LOG)
		std::cout << "Default Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const long &grade) : _name(name) {

	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	if (LOG)
		std::cout << "Default Bureaucrat " << _name << " Created" << std::endl;
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) {

	if (LOG)
		std::cout << "Copy Bureaucrat Constructor" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat() {

	if (LOG)
		std::cout << "Bureaucrat " << getName() << " Destroyed" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat & src) {

	if (this != &src) {
		this->_grade = src._grade;
	}
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()	{

	return ("We've encountered a problem, your grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

	return ("We've encountered a problem, your grade is too low.");
}

std::string		Bureaucrat::getName(void) const {

	return (_name);
}

long			Bureaucrat::getGrade(void) const {

	return (_grade);
}

void			Bureaucrat::gradeIncrement(void) {

	if (getGrade() <= 1)
		throw GradeTooHighException();
	_grade--;
}

void			Bureaucrat::gradeDecrement(void) {

	if (getGrade() >= 150)
		throw GradeTooLowException();
	_grade++;
}

void			Bureaucrat::signForm(Form &src) {

	src.beSigned(*this);
	if (src.getSignedStatus())
		std::cout << ft_embed(this->getName(), GREEN) << "signed" << ft_embed(src.getName(), GREEN) << std::endl;
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &src) {

	o << ft_embed(src.getName(), GREEN) << "has a grade of " << src.getGrade();
	return o;
}
