/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:51:15 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/21 21:05:54 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

# define NORMAL			"\x1B[0m"
# define RED			"\x1B[31m"
# define GREEN			"\x1B[32m"
# define YELLOW			"\x1B[33m"
# define BLUE			"\x1B[34m"
# define MAGNETA		"\x1B[35m"
# define CYAN			"\x1B[36m"
# define PINK			"\033[38;5;200m"
# define ORANGE			"\033[38;5;208m"
# define PURPLE			"\033[38;5;55m"
# define MAROON			"\033[38;5;88m"
# define GREY			"\033[38;5;246m"

class Contact {

public:

	void 	add_contact(void);
	void 	display_contact(void);
	// void 	display_contact_details(void);

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	long long 	phone_number;
	std::string darkest_secret;
};

class PhoneBook {

public:

	void	add(void);
	// void	search(void);
	// void	display(void);

	PhoneBook();
	virtual ~PhoneBook();

private:
	Contact	contacts[8];
	int		amount;
	int		index;
};
