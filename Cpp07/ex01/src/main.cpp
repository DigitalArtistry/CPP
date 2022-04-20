/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:00:02 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/20 17:55:11 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>
#include <string>

// class	Example {

// public:
// 	Example( size_t nb = 42) : _nb(nb) { return; }
// 	size_t	getNb(void) {return _nb; }
// private:
// 	size_t	_nb;
// };

// std::ostream &	operator<<(std::ostream &o, Example &y) {
// 	o << y.getNb();
// 	return o;
// }

// int		main(int ac, char **av) {

// 	int	intArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
// 	std::string strArr[] = {"trois", "std", "string"};
// 	Example		classArr[] = {101, 102, 103};

// 	std::cout << "intArr: " << std::endl;
// 	iter(intArr, 10, p_elem<int>); std::cout << std::endl;

// 	std::cout << "charArr: " << std::endl;
// 	iter(charArr, 5, p_elem<char>); std::cout << std::endl;

// 	std::cout << "strArr: " << std::endl;
// 	iter(strArr, 3, p_elem<std::string>); std::cout << std::endl;

// 	std::cout << "classArr: " << std::endl;
// 	iter(classArr, 3, p_elem<Example>); std::cout << std::endl;

// 	return 0;
// }

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}