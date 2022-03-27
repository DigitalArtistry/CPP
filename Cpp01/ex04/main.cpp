/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:47:03 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/25 22:13:22 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int		main(int ac, char **av) {

	std::ifstream	ifs(av[1]);
	std::string		line, T, file, s1, s2;
	size_t			pos;

	if (ac < 4) {
		std::cout << "Parmameter format is <filename> s1 s2" << std::endl;
		return 0;
	}
	file = av[1];
	s1 = av[2];
	s2 = av[3];
	file.append(".replace");
	if (!ifs)
		std::cout << "Problem opening file" << std::endl;
	else {
		std::ofstream	ofs(file);
		while (std::getline(ifs, line)) {
			
			while ((pos = line.find(s1)) != std::string::npos) {
				T = line.substr(0, pos);
				T.append(s2);
				ofs << T;
				line.erase(0, pos + s1.length());
			}
			if ((pos = line.find(s1)) == std::string::npos)
				ofs << line;
			if (ifs.eof())
				break;
			ofs << "\n";
		}
	}
	ifs.close();
	return 0;
}