/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:52:19 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/06 13:14:45 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include "utils.hpp"

class Bureaucrat;

class Form {

private:

	const std::string	_name;
	bool				_signed;
	const long			_gradeSign;
	const long			_gradeExec;

public:
	Form(void);
	Form(const Form & src);
	Form(const std::string &name, const long &gradeSign, const long &gradeExec);
	virtual ~Form();

	Form	&operator=(const Form & src);

	std::string		getName(void) const;
	long			getSignGrade(void) const;
	long			getExecGrade(void) const;
	bool			getSignedStatus(void) const;
	void			beSigned(const Bureaucrat & src);

	void			checkExecute(const Bureaucrat & executor) const;
	virtual void	execute(const Bureaucrat & executor) const = 0;


	// Nested classes
	class FGradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class FGradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class FormSignedException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class BGradeTooLowException : public std::exception {
	public:
		virtual const char * what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Form &src);

#endif
