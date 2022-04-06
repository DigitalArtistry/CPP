/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:34:48 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 13:50:30 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "utils.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("X", 145, 137), _target("X") {

	if (LOG)
		std::cout << "Default ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {

	if (LOG)
		std::cout << "Default ShrubberyCreationForm Created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) {

	if (LOG)
		std::cout << "Copy ShrubberyCreationForm Constructor" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	if (LOG)
		std::cout << "ShrubberyCreationForm " << getName() << " Destroyed" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src) {

	(void)src;
	return *this;
}

void		ShrubberyCreationForm::execute(const Bureaucrat & executor) const {

	std::ofstream	file;
	std::ifstream	drawing;

	Form::checkExecute(executor);
	file.open((_target + "_shrubbery").c_str());
	drawing.open(".shrubbery/drawing");
	if (file.good() == false || drawing.good() == false) {
		std::cerr << ft_embed("File creation or drawing read error", RED) << std::endl;
		return;
	}
	file << drawing.rdbuf() << std::endl;
	drawing.close();
	file.close();
}