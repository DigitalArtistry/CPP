/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:59:59 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/18 11:50:30 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class	Array {

public:
	Array(void) : _nb(42) {return;};
	Array( unsigned int nb) : _nb(nb) {return;};
	~Array() {};
	
	unsigned int	getNb(void) {return _nb;}

private:
	unsigned int	_nb;
};

std::ostream &	operator<<(std::ostream &o, Array<unsigned int> &x) {
	o << x.getNb();
	return o;
}

#endif