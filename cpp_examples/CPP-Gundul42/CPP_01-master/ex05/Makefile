# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 12:37:49 by graja             #+#    #+#              #
#    Updated: 2021/12/19 17:16:56 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= karen
SRC		= Karen.cpp main.cpp
CC		= c++
FLAGS		= -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean	:

fclean	:
	rm -f $(NAME)

re	: fclean all
