# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 12:37:49 by graja             #+#    #+#              #
#    Updated: 2021/12/18 17:47:29 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fight 
SRC		= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
CC		= c++
FLAGS		= -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean	:

fclean	:
	rm -f $(NAME)

re	: fclean all
