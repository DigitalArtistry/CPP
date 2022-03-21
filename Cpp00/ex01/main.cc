/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:03:51 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/21 21:11:11 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	bool		run;

	run = true;
	while (run)
	{
		std::cout << "Waiting for a command... (ADD, SEARCH OR EXIT)" << std::endl;
		std::getline (std::cin, command);
		
		if (command == "ADD")
			phonebook.add();
		// else if (command == "SEARCH")
		// 	phonebook.search();
		// else if (command == "EXIT") {
		// 	std::cout << "See you soon, Bye!" << std::endl;
		// 	run = false;
		// }
	}
	return(0);
}