/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:13:02 by lucisanc          #+#    #+#             */
/*   Updated: 2022/03/26 18:48:26 by lucisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen {

public:
	void filter(std::string level);

	Karen();
	~Karen();

private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
};

#endif