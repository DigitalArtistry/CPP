/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 13:59:17 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testBasic(void) {
	
	Bureaucrat				i("intern",150);
	ShrubberyCreationForm	n("garden");

	try {
		i.executeForm(n);
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
	try {
		i.signForm(n);
		i.executeForm(n);
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
	try {
		i.gradeIncrement();
		i.gradeIncrement();
		i.gradeIncrement();
		i.gradeIncrement();
		i.gradeIncrement();
		i.gradeIncrement();
		i.signForm(n);
		i.executeForm(n);
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }

	RobotomyRequestForm		m("student");
	try {
		i.signForm(m);
		i.executeForm(m);
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }

	PresidentialPardonForm		g("student");
	try {
		i.signForm(g);
		i.executeForm(g);
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }

}

void	testBoss(void) {

	Bureaucrat					i("Boss", 1);
	ShrubberyCreationForm		n("garden");

	try {
		i.signForm(n);
		i.executeForm(n);
	}
	catch (std::exception & e) { std::cerr << e.what() << std::endl; }

	RobotomyRequestForm			m("student");
	try {
		i.signForm(m);
		i.executeForm(m);
	}
	catch (std::exception & e) { std::cerr << e.what() << std::endl; }

	PresidentialPardonForm			g("student");
	try {
		i.signForm(g);
		i.executeForm(g);
	}
	catch (std::exception & e) { std::cerr << e.what() << std::endl; }

}

int		main() {

	testBasic();
	testBoss();

	return 0;
}