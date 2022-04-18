#include "Convert.hpp"

Convert::Convert(void) {

	if (LOG)
		std::cout << "Default Constructor" << std::endl;
}

Convert::Convert(Convert const &src) {

	if (LOG)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Convert		&Convert::operator=(Convert const &src) {

	if (this != &src)
		return (*this);
	return (*this);
}

Convert::~Convert() {

	if (LOG)
		std::cout << "Convert destructor called" << std::endl;
}


std::ostream		&operator<<(std::ostream &o, Convert const &src) {

	return o;
}