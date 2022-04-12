#ifndef CONVERT_HPP
# define CONVERT_HPP
# define LOG 1

# include <iostream>
# include <string>
# include <cstdlib>

class Convert {
private:
	std::string		_rawStr;

public:
	Convert(void);
	Convert(std::string	&str);
	Convert(Convert const &src);
	~Convert();

	Convert	&operator=(Convert const &src);

	std::string		getRawStr(void) const;
};

std::ostream	&operator<<(std::ostream &o, Convert const &src);

#endif