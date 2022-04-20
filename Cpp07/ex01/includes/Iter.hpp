/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:59:59 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/20 17:54:56 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename X>
void	p_elem(X elem) {

	std::cout << elem << " ";
}

template<typename T>
void	iter(const T *arr, int size, void fn(const T &) ) {

	for (int i = 0; i < size; i++) {
		fn(arr[i]);
	}
}


#endif