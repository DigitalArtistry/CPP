#include "Convert.hpp"

int		main(int ac, char **av) {

	std::string		s;

	if (ac != 2) {
		std::cerr << "Wrong number of arguments" << std::endl;
		return 0;
	}
	s = av[1];
	{
		Convert a(s);

		Convert b(a);

		std::cout << b << std::endl;
	}
	return 0;
}