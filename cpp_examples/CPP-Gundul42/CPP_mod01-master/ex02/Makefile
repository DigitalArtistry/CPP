# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 12:37:49 by graja             #+#    #+#              #
#    Updated: 2021/12/18 14:26:52 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02
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
