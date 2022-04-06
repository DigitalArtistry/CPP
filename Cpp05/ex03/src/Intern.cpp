/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:03:16 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 14:54:19 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{

	if (LOG)
		std::cout << "Intern Created" << std::endl;
}

Intern	&Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Intern::~Intern()
{

	if (LOG)
		std::cout << "Intern Destroyed" << std::endl;
}

Form*	Intern::makeForm(std::string formRequest, std::string target) {

	std::string formTypes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i;

	for (i = 0; i < 3; i++)
		if (formTypes[i] == formRequest)
			break;
	if (formTypes[i] != formRequest)
		throw doesNotExistException();
	switch (i){
		case 0:
			std::cout << ft_embed("Intern", GREEN) << "creates ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << ft_embed("Intern", GREEN) << "creates RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << ft_embed("Intern", GREEN) << "creates PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(target));
	}
	return 0;
}

const char *Intern::doesNotExistException::what() const throw() {

	return ("The Form you requested does not exist");
}