#ifndef CONVERT_HPP
# define CONVERT_HPP
# define LOG 1

# include <iostream>

class Convert {
private:


public:
	Convert(void);
	Convert(Convert const &src);
	~Convert();

	Convert	&operator=(Convert const &src);

};

std::ostream	&operator<<(std::ostream &o, Convert const &src);

#endif