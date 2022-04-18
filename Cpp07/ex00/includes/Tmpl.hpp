/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tmpl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:59:59 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/17 20:00:00 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMPL_HPP
# define TMPL_HPP

# include <iostream>

template<typename X>
void	swap(X & a, X & b) {

	X	temp = a;

	a = b;
	b = temp;
}

template<typename X>
X &	min(X & a, X & b) {

	return ((a >= b) ? b : a);
}

template<typename X>
X & max(X & a, X & b) {

	return ((a <= b) ? b : a);
}

#endif