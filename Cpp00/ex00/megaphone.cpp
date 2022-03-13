/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:41:43 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/12 17:46:11 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	ft_strtrim(std::string str)
{
	str = str.substr(str.find_first_not_of("\t \v"));
	str = str.substr(0, str.find_last_not_of("\t \v") + 1);
	return (str);
}

std::string	ft_toupper_string(std::string str)
{
	for (int i = 0 ; str[i] ; ++i)
		str[i] = toupper(str[i]);
	return (str);
}

int		main(int ac, char **av)
{
	std::string	result;
	char 		*res;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else for (int i = 1 ; i < ac ; ++i)
	{
		result = ft_toupper_string(av[i]);
		result = ft_strtrim(result);
		std::cout << result << " ";
	}
	std::cout << std::endl;
    return (0);
}