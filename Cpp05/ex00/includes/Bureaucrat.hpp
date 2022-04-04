/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:52:19 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/04 16:19:46 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# define LOG 1

# include <iostream>
# include <string>

class Bureaucrat	{

private:

	std::string	_name;
	size_t		_grade;

public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat & src);
	Bureaucrat(const std::string &name, const size_t &grade);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat & src);

	std::string		getName(void) const;
	size_t			getGrade(void) const;

	// Nested classes
	class GradeTooHighException : public std::exception {

	public:
		virtual const char* gtooHigh() const throw() {

			return ("We've encountered a problem, your grade is too high.");
		}
	};

	class GradeTooLowException : public std::exception {

	public:
		virtual const char* gtooLow() const throw() {

			return ("We've encountered a problem, your grade is too low.");
		}
	};
};

#endif
