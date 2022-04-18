/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:59:59 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/18 13:17:17 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class	Array {

public:
	Array(void) : _arrP(NULL), _size(5) {return;};
	Array( unsigned int size) : _arrP(new T[size], _size(size) {
		for (unsigned int i = 0; i < size; i++) {
			_arrP[i] = static_cast<T>(0);
		}
		return;
	};
	~Array() {delete [] _arrP;};
	
	void	copyArray( Array const &src, unsigned int size) {
		for (unsigned int i = 0; i < size; i++) {
			this->_arrP[i] = src._arrP[i];
		}
	};

	
	unsigned int	getSize(void) const {return _size;};

private:
	T *				_arrP;
	unsigned int	_size;
};

std::ostream &	operator<<(std::ostream &o, Array<unsigned int> &x) {
	o << x.getNb();
	return o;
}

#endif