/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:22:18 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/04 17:59:21 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main() {

	{

		try {
			Bureaucrat i("Boss", 21);
			if (i.getGrade() > 150)
				throw Bureaucrat::GradeTooLowException();
			if (i.getGrade() < 1)
				throw Bureaucrat::GradeTooHighException();
			std::cout << i.getName() << std::endl;
			std::cout << i.getGrade() << std::endl;

			// Bureaucrat j("Mr.Robot", -21);
			// Bureaucrat h("Mr.Robot", 250);
		}
		catch (const Bureaucrat::GradeTooLowException& e) {
			std::cout << e.gtooLow() << std::endl;
			return 0;
		}
		catch (const Bureaucrat::GradeTooHighException& e) {
			std::cout << e.gtooHigh() << std::endl;
			return 0;
		}


	}
	return 0;
}