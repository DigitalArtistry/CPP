/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:51:27 by graja             #+#    #+#             */
/*   Updated: 2021/12/19 15:38:51 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	ifile;
	std::ofstream	ofile;
	std::string	outname;
	std::string	line;
	std::string	repl;
	size_t			pos;

	if (argc != 4)
	{
		std::cout << "Error: wrong arguments" << std::endl;
		return (1);
	}
	repl = argv[2];
	ifile.open(argv[1], std::ifstream::in);
	if (!ifile.is_open())
	{
		std::cout << "Error opening file " << argv[1] << std::endl;
		ifile.close();
		return (1);
	}
	outname.assign(argv[1]);
	outname.append(".replace");
	ofile.open(outname , std::ofstream::out);
	if (!ofile.is_open())
	{
		std::cout << "Error opening file " << argv[1] << std::endl;
		ofile.close();
		return (1);
	}
	while (1)
	{
		std::getline(ifile, line);
		pos = line.find(argv[2]);
		if (pos != std::string::npos)
		{
			line.erase(pos, repl.length());
			line.insert(pos, argv[3]);
		}
		ofile << line;
		if (ifile.good())
			ofile << std::endl;
		else
			break ;
	}
	ifile.close();
	ofile.close();
	return (0);
}
