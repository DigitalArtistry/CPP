/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 13:18:16 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "utils.hpp"

Form::Form(void) : _name("X"), _signed(false), _gradeSign(42), _gradeExec(21) {

	if (LOG)
		std::cout << "Default Form Constructor" << std::endl;
}

Form::Form(const std::string &name, const long &gradeSign, const long &gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {

	if (_gradeSign < 1 || _gradeExec < 1)
		throw FGradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw FGradeTooLowException();
	if (LOG)
		std::cout << "Default Form " << _name << " Created" << std::endl;
}

Form::Form(const Form & src) : _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec) {

	if (LOG)
		std::cout << "Copy Form Constructor" << std::endl;
	*this = src;
}

Form::~Form() {

	if (LOG)
		std::cout << "Form " << getName() << " Destroyed" << std::endl;
}

Form	&Form::operator=(const Form & src) {

	if (this != &src) {
		this->_signed = src._signed;
	}
	return *this;
}

const char *Form::FGradeTooHighException::what() const throw()	{

	return ("We've encountered a problem, your Form grade is too high.");
}

const char *Form::FGradeTooLowException::what() const throw() {

	return ("We've encountered a problem, your Form grade is too low.");
}

const char *Form::FormSignedException::what() const throw() {

	return ("Error executing: The Form is not signed");
}

const char *Form::BGradeTooLowException::what() const throw() {

	return ("Error executing: Bureaucrat grade too low");
}

std::string		Form::getName(void) const {

	return (_name);
}

long			Form::getSignGrade(void) const {

	return (_gradeSign);
}

long			Form::getExecGrade(void) const {

	return (_gradeExec);
}

bool			Form::getSignedStatus(void) const {

	return (_signed);
}

void			Form::beSigned(const Bureaucrat & src) {

	if (src.getGrade() > this->getSignGrade()) {
		std::cout << ft_embed(src.getName(), RED) << "couldn't sign" << ft_embed(this->getName(), RED) << "because his grade was too low." << std::endl;
		return;
	}
	_signed = true;
}

void			Form::checkExecute(const Bureaucrat & executor) const {

	if (!getSignedStatus())
		throw FormSignedException();
	else if (executor.getGrade() > getExecGrade()) {
		std::cerr << ft_embed(executor.getName(), RED) << "grade too low to execute." << std::endl;
		throw BGradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &o, const Form &src) {

	o << "Form" << ft_embed(src.getName(), GREEN) << std::endl; 
	o << "Sign grade of " << src.getSignGrade() << std::endl;
	o << "Exec grade of " << src.getExecGrade() << std::endl;
	if (src.getSignedStatus())
		o << "It is currently " << ft_embed("Signed", GREEN) << std::endl;
	else
		o << "It is currently " << ft_embed("Unsigned", RED) << std::endl;
	return o;
}
