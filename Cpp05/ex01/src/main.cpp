/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/05 15:22:47 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testBoss(void) {

	Bureaucrat	i("Boss", 1);
	Form		n("Contract", 98, 1);

	std::cout << n << std::endl;
	i.signForm(n);
	std::cout << n << std::endl;
}

void	testInvalidForm(void) {

	Bureaucrat	i("Intern", 99);
	Form		n("Contract", 200, 1);

	i.signForm(n);
}

void	testIntern(void) {

	Bureaucrat	i("Intern", 99);
	Form		n("Contract", 98, 1);

	i.signForm(n);

	std::cout << "Intern grade incremented" << std::endl;
	i.gradeIncrement();
	std::cout << i << std::endl;
	i.signForm(n);
}

int		main() {

	{
		try {
			testBoss();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			testInvalidForm();
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		testIntern();
	}
	return 0;
}