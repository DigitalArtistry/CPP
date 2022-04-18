/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:59:59 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/17 23:54:31 by lucisanc         ###   ########.fr       */
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

template<typename A, typename S, typename F>
void	iter(A *arr, S size, F (*fn)(A)) {

	for (S i = 0; i < size; i++) {
		fn(arr[i]);
	}
}


#endif