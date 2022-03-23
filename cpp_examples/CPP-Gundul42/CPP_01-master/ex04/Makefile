# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 12:37:49 by graja             #+#    #+#              #
#    Updated: 2021/12/19 12:51:11 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace
SRC		= main.cpp
CC		= c++
FLAGS		= -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean	:

fclean	:
	rm -f $(NAME)

re	: fclean all
