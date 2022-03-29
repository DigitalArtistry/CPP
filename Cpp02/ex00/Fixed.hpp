/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:30 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/28 15:36:40 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {

private:
	int					_nb;
	static int const	_fract = 8;

public:
	Fixed(void);
	Fixed(Fixed const & src);  // copy constructor
	~Fixed();

	Fixed &operator=(Fixed const & oload);  // copy assignment operator overload

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

#endif