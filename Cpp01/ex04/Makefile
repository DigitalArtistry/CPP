NAME		= sed2

CC			= clang++

FLAGS		= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g 

SRC			= \
main.cpp

OBJ			= ${SRC:.cpp=.o}

RM			= rm -rf

CLEAN		= @echo "Executable removed!"
DONE		= @echo "Compiled!"

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) -o $@ $(OBJ)
		$(DONE)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	$(CLEAN)

re: fclean all

.PHONY : clean fclean re