/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:47:03 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/25 15:03:41 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed_for_losers.hpp"

int		main(int ac, char **av) {

	std::ifstream	ifs(av[1]);
	std::ofstream	ofs("test2");
	std::string		line, T;

	if (ac < 4)
		return 0;
	if (!ifs)
		std::cout << "Didn't work";
	else {

		while (1 && std::getline(ifs, line)) {
			
			std::stringstream sso(line);
			while (std::getline(sso, T, ' ')) {
				std::cout << "dbug: " << T << std::endl;
				if (T == av[2]) {
					T = av[3];
				}
				ofs << T << ' ';
			}
			if (ifs.eof())
				break;
			ofs << "\n";
		}
	}
	ifs.close();
	return 0;
}