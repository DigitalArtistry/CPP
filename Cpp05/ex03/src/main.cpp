/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 14:51:45 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int		main() {

	try
	{
		Intern	someRandomIntern;
		Form*	rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "bender");

		Bureaucrat	boss("Boss", 1);
		boss.signForm(*rrf);
		boss.executeForm(*rrf);

		delete rrf;
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
	try
	{
		Intern	someRandomIntern;
		Form*	rrf;

		rrf = someRandomIntern.makeForm("unknown form", "bender");

		delete rrf;
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }

	return 0;
}