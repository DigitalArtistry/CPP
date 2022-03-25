/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:47:03 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/25 16:58:54 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed_for_losers.hpp"

int		main(int ac, char **av) {

	std::ifstream	ifs(av[1]);
	std::string		line, T, file, s1, s2;
	size_t			pos;

	if (ac < 4)
		return 0;
	file = av[1];
	s1 = av[2];
	s2 = av[3];
	file.append(".replace");
	if (!ifs)
		std::cout << "Didn't work";
	else {
		std::ofstream	ofs(file);
		while (std::getline(ifs, line)) {
			
			std::stringstream sso(line);
			while (std::getline(sso, T, ' ')) {
				if ((pos = T.find(s1)) != std::string::npos) {
					ofs << T.substr(0, pos) << s2 << T.substr(pos + s1.length()) << ' ';
				}
				else
					ofs << T << ' ';
			}
			ofs.seekp(-1, std::ios_base::end);
			if (ifs.eof())
				break;
			ofs << "\n";
		}
	}
	ifs.close();
	return 0;
}