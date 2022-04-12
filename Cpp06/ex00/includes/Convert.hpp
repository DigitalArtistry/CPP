/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:55:29 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/11 18:55:31 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# define LOG	0

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <cctype>
# include <limits> // need on linux for numeric_limits 

// # include <typeinfo> // typeid(x).name()

class Convert {
private:
	std::string		_rawStr;
	char			_c;
	int				_i;
	float			_f;
	double			_d;
	std::string		_cOut;
	std::string		_iOut;
	std::string		_fOut;
	std::string		_dOut;

public:
	Convert(void);
	Convert(std::string	&str);
	Convert(Convert const &src);
	~Convert();

	Convert	&operator=(Convert const &src);

	int				parseArg(void);
	void			typeNb(void);

	std::string		getRawStr(void) const;
	void			printError(std::string type) const;
	void			printChar(void) const;
	void			printAll(void) const;
};

std::ostream	&operator<<(std::ostream &o, Convert const &src);

#endif