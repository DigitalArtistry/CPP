/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classConv.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:56:16 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/12 16:58:33 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONV_HPP
# define CLASSCONV_HPP

# include <iostream>
# include <cstdlib>
# include <exception>

class Base {

public:
	virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};


#endif