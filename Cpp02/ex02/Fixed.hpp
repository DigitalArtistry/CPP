/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:30 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/29 16:25:35 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# define LOG 0

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

class Fixed {

private:
	int					_fxpt;
	static int const	_fract = 8;

public:
	Fixed(void);  // default constructor
	Fixed(Fixed const & src); // copy constructor
	Fixed(int const nb);
	Fixed(float const f);
	~Fixed();  // destructor

	Fixed &operator=(Fixed const & oload); // copy assignment operator overload

	// 6 comparison operators
	bool operator==(Fixed const & fixed) const { return (this->_fxpt == fixed._fxpt); }
	bool operator!=(Fixed const & fixed) const { return (this->_fxpt != fixed._fxpt); }
	bool operator< (Fixed const & fixed) const { return (this->_fxpt < fixed._fxpt); }
	bool operator> (Fixed const & fixed) const { return (this->_fxpt > fixed._fxpt); }
	bool operator<=(Fixed const & fixed) const { return (this->_fxpt <= fixed._fxpt); }
	bool operator>=(Fixed const & fixed) const { return (this->_fxpt >= fixed._fxpt); }

	// 4 arithmetic operators
	Fixed operator+(Fixed const & fixed){ return (Fixed(this->toFloat() + fixed.toFloat())); }
	Fixed operator-(Fixed const & fixed){ return (Fixed(this->toFloat() - fixed.toFloat())); }
	Fixed operator*(Fixed const & fixed){ return (Fixed(this->toFloat() * fixed.toFloat())); }
	Fixed operator/(Fixed const & fixed){ return (Fixed(this->toFloat() / fixed.toFloat())); }

	// 4 increment/decrement operators
	Fixed &operator++();
	Fixed operator++(int x);
	Fixed &operator--();
	Fixed operator--(int x);

	// 4 public overloaded member functions
	static Fixed &min(Fixed & n1, Fixed & n2);
	static Fixed &max(Fixed & n1, Fixed & n2);
	static const Fixed &min(Fixed const & n1, Fixed const & n2) ;
	static const Fixed &max(Fixed const & n1, Fixed const & n2) ;

	float	toFloat(void) const;
	int		toInt(void) const;

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &nbr);

#endif