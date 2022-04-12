/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:56:16 by lucisanc          #+#    #+#             */
/*   Updated: 2022/04/11 19:18:24 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# define LOG 0

# include <iostream>
# include <string>

class Data {
private:
	int	_nb;

public:
	Data(void);
	Data(int nb);
	Data(Data const &src);
	~Data();

	Data	&operator=(Data const &src);
	
	int		getVal(void) const;
};

#endif