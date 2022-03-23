# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 14:06:05 by graja             #+#    #+#              #
#    Updated: 2022/02/16 18:45:24 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03

SRCS	=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

CC	=	c++

FLAGS	=	-Wextra -Werror -Wall -Wno-shadow

$(NAME)	:	$(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all	:	$(NAME)

clean	:

fclean	:	
	rm -f $(NAME)

re	:	fclean all

