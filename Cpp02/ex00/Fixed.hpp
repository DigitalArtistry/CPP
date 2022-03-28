/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:08:30 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/27 18:40:17 by lucisanc         ###   ########.fr       */
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
	Fixed & operator=(Fixed const & x);  // copy assignment operator overload
	Fixed(Fixed const & x);  // copy constructor

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	Fixed(void);
	~Fixed();
};

#endif