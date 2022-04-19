/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:52:19 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/19 17:00:54 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include "utils.hpp"

class Form;

class Bureaucrat {

private:

	std::string const	_name;
	long				_grade;

public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat & src);
	Bureaucrat(const std::string &name, const long &grade);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat & src);

	std::string		getName(void) const;
	long			getGrade(void) const;
	void			gradeIncrement(void);
	void			gradeDecrement(void);
	void			signForm(Form &src);

	// Nested classes
	class GradeTooHighException : public std::exception {

	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {

	public:
		virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &src);

#endif
