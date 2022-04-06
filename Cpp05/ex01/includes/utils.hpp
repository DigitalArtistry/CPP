/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:10:22 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/05 15:22:53 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# define LOG 1
# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define END		"\033[0m"

# include <iostream>
# include <string>


std::string		ft_embed(const std::string	str, const std::string color);

#endif