/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:17:52 by graja             #+#    #+#             */
/*   Updated: 2021/12/19 17:35:37 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	mygirl;

	mygirl.complain("debug");
	mygirl.complain("error");
	mygirl.complain("nonsense");
	mygirl.complain("warning");
	mygirl.complain("info");
}
