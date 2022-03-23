/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:46 by graja             #+#    #+#             */
/*   Updated: 2022/03/14 13:00:02 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

//This is a sample struct to show that with
//a template really anything can be given to the <typename T>
typedef	struct s_test
{
	std::string	name;
	int			num;
	bool			val;
}	t_test;

/* Templates are not functions with local variables !
 * if the original values are needed you have to
 * save them. This one is for using other templates 
 * as the third parameter.
*/
template <typename T>
void	iter(T const & adress, size_t const & length, void (*func)(T &))
{
	T	adr = adress;
	size_t	i = 0;

	while (i < length)
	{
		func(adr);
		adr += 1;
		i++;
	}
}

/* This is a template overload, which can handle any variable
 * for itterating and any function Pointer as third parameter
 */
template <typename T, typename U, typename V>
void	iter(T const & adress, U const & length, V const & func)
{
	T	adr = adress;
	U	len = length;
	
	while (len > 0)
	{
		func(adr);
		adr += 1;
		len--;
	}
}

/* Template to first print the value and then double it
 */
template <typename T>
void	ft_double(T & var)
{
	std::cout << *var << " * 2 = " << *var * 2 << std::endl;
	*var *= 2;
}

/* Template to print each member of an array
 */
template <typename T>
void	ft_parr(T & var)
{
	std::cout << var << " Adress with value of: " << *var << std::endl;
}	

#endif
