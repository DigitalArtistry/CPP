/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:02:24 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 16:08:51 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "utils.hpp"

class Intern {

private:
public:
	Intern(void);
	~Intern();

	Intern	&operator=(Intern const & intern);

	Form*	makeForm(std::string formRequest, std::string target);

	class	doesNotExistException : public std::exception {
	public:
		virtual const char * what() const throw();
	};
};

#endif