/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:24:46 by graja             #+#    #+#             */
/*   Updated: 2022/03/09 10:58:51 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
# define TEMPLATES_H

template <typename sw>
void	ftswap(sw & a, sw & b)
{
	sw	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename mn>
mn const &	ftmin(mn const & x, mn const & y)
{
	return (x < y ? x : y);
}

template <typename mx>
mx const &	ftmax(mx const & x, mx const & y)
{
	return (x > y ? x : y);
}

#endif
