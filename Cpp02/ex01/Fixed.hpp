/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:30 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/29 14:28:31 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
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

	float	toFloat(void) const;
	int		toInt(void) const;

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &nbr);

#endif