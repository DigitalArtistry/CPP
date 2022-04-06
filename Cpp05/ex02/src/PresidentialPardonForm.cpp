/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 13:57:20 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "utils.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("X", 25, 5), _target("X") {

	if (LOG)
		std::cout << "Default PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {

	if (LOG)
		std::cout << "Default PresidentialPardonForm Created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) {

	if (LOG)
		std::cout << "Copy PresidentialPardonForm Constructor" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	if (LOG)
		std::cout << "PresidentialPardonForm " << getName() << " Destroyed" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm & src) {

	(void)src;
	return *this;
}

void		PresidentialPardonForm::execute(const Bureaucrat & executor) const {

	Form::checkExecute(executor);

	std::cout << ft_embed(_target, GREEN) << "has been pardoned by the great Zaphod Beeblebrox !" << std::endl;
}