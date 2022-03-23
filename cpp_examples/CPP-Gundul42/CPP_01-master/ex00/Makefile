# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 14:10:50 by graja             #+#    #+#              #
#    Updated: 2021/12/18 11:44:01 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
CC		= g++
SRC		= Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
FLAGS		= -Werror -Wall -Wextra

all	:	$(NAME)

$(NAME)	:	$(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean	:

fclean	:
	rm -f $(NAME)

re	:	fclean all
