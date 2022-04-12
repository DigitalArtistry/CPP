/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:55:38 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/11 18:55:39 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) : _rawStr("X") {

	if (LOG)
		std::cout << "Default Constructor" << std::endl;
}

Convert::Convert(std::string &str) : _rawStr(str){

	if (LOG)
		std::cout << "Convert constructor called" << std::endl;
	parseArg();
}

Convert::Convert(Convert const &src) : _rawStr(src._rawStr) {

	if (LOG)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Convert		&Convert::operator=(Convert const &src) {

	if (this != &src)
		this->_rawStr = src._rawStr;
	return (*this);
}

Convert::~Convert() {

	if (LOG)
		std::cout << "Convert destructor called" << std::endl;
}

int			Convert::parseArg(void) {

	if (getRawStr().length() == 1 && isprint(getRawStr().at(0)) &&\
		(getRawStr().at(0) < '0' || getRawStr().at(0) > '9')) {
		_c = static_cast<char>(getRawStr().at(0));
		_i = static_cast<int>(getRawStr().at(0));
		_f = static_cast<float>(getRawStr().at(0));
		_d = static_cast<double>(getRawStr().at(0));
		printChar();
	}
	else
		typeNb();
	return 0;
}

void			Convert::typeNb(void) {

	char *	pEnd;
	double	d;

	d = strtod(getRawStr().c_str(), &pEnd);
	if (*pEnd == 'f' && *(pEnd + 1) == '\0')
		;
	else if (*pEnd != '\0') {
		printError("impossible");
		return;
	}
	if (d >= 0 && d <= 127) {
		if (!isprint(d))
			_cOut = "Non displayable";
		_c = static_cast<char>(d);
		_i = static_cast<int>(d);
		_f = static_cast<float>(d);
		_d = static_cast<double>(d);
	}
	else
		_cOut = "impossible";
	if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min())
		_i = static_cast<int>(d);
	else
		_iOut = "impossible";
	_f = static_cast<float>(d);
	_d = static_cast<double>(d);
	printAll();
}

void		Convert::printAll(void) const {

	std::string mI = "impossible";
	
	if (_cOut == mI || _cOut == "Non displayable")
		std::cout << "char: " << _cOut << std::endl;
	else
		std::cout << "char: " << _c << std::endl;
	if (_iOut == mI)
		std::cout << "int: " << _iOut << std::endl;
	else
		std::cout << "int: " << _i << std::endl;
	if (_fOut == mI)
		std::cout << "float: "  << _fOut << std::endl;
	else
		std::cout << "float: "  << std::fixed << std::setprecision(1) << _f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << _d << std::endl;
}

void		Convert::printChar(void) const {

	std::cout << "char: " << _c << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: "  << std::fixed << std::setprecision(1) << _f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << _d << std::endl;
}

void		Convert::printError(std::string type) const {

	std::cout << "char: " << type << std::endl;
	std::cout << "int: " << type << std::endl;
	std::cout << "float: " << type << std::endl;
	std::cout << "double: " << type << std::endl;
}

std::string		Convert::getRawStr(void) const {

	return (this->_rawStr);
}

std::ostream		&operator<<(std::ostream &o, Convert const &src) {

	o << src.getRawStr();
	return o;
}