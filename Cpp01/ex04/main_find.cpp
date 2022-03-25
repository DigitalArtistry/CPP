/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_find.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:47:03 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/25 15:36:23 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed_for_losers.hpp"

int		main(int ac, char **av) {

	std::ifstream	ifs(av[1]);
	// std::ofstream	ofs("test2");
	std::string		line, T, file, s1, s2;
	size_t			pos;

	if (ac < 4)
		return 0;
	file = av[1];
	s1 = av[2];
	s2 = av[3];
	file.append(".replace");
	std::ofstream	ofs(file);
	if (!ifs)
		std::cout << "Didn't work";
	else {

		while (1 && std::getline(ifs, line)) {
			
			std::stringstream sso(line);
			while (std::getline(sso, T, ' ')) {
				if ((pos = T.find(s1)) != std::string::npos) {
					T = T.substr(0, pos);
					ofs << T.substr(0, pos) << s2 << ' ';
					T.erase(0, pos + (s1).length());
				} else
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