# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucisanc <lucisanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 07:43:47 by psprawka          #+#    #+#              #
#    Updated: 2022/03/12 21:30:26 by lucisanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= phonebook
COMPILER		= clang++
FLAGS			= -g -Wall -Wextra -Werror
FLAGS			+= # -fsanitize=address

HEADERS	= header.hpp \
			ClassContact.hpp \
			ClassPhonebook.hpp			
	
SRCS = main.cpp \
		ClassContact.cpp \
		ClassPhonebook.cpp
				
CLEAN_A		= @echo "\033[38;5;246mExecutable removed!"
DONE		= @echo "\033[38;5;200mCompiled!"

all: $(NAME)

$(NAME):
		@$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)
		$(DONE)

fclean:
	@rm -fr $(NAME) $(NAME).dSYM
	$(CLEAN_A)

re: fclean all 
