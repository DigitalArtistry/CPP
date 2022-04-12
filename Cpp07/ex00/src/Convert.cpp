#include "Convert.hpp"

Convert::Convert(void) : _rawStr("X") {

	if (LOG)
		std::cout << "Default Constructor" << std::endl;
}

Convert::Convert(std::string &str) : _rawStr(str){

	if (LOG)
		std::cout << "Convert constructor called" << std::endl;
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

std::string		Convert::getRawStr(void) const {

	return (this->_rawStr);
}

std::ostream		&operator<<(std::ostream &o, Convert const &src) {

	o << src.getRawStr();
	return o;
}