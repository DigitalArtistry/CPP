# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 13:24:19 by graja             #+#    #+#              #
#    Updated: 2022/03/11 15:53:31 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02

SRCS	=	main.cpp

CC	=	c++

FLAGS	=	-Wextra -Werror -Wall -Wconversion -std=c++98 

OBJ	=	${SRCS:.cpp=.o}

all	:	$(NAME)

$(NAME)	:	$(OBJ) $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all

.PHONY: all clean fclean re
