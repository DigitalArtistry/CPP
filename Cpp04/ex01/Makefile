NAME		= ex01

CC			= clang++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

INCS_DIR	= ./includes/
MAIN_INC	= -I$(INCS_DIR)
INCS		= $(shell find $(INCS_DIR) -type f -name "*.hpp")

SRCS_DIR 	= ./src/
SRCS		= $(shell find $(SRCS_DIR) -type f -name "*.cpp")

OBJS_DIR	= ./objects/
OBJS		= $(SRCS:$(SRCS_DIR)%.cpp=$(OBJS_DIR)%.o)

CLEAN		= @echo "Executable removed!"
DONE		= @echo "Compiled!"
_CLEAR		= \033[0K\r\c

$(OBJS_DIR)%.o	: $(SRCS_DIR)%.cpp
			@mkdir -p $(OBJS_DIR)
			@echo "[..] compiling $*.cpp\r\c"
			@$(CC) $(MAIN_INC) -c $< -o $@
			@echo "$(_CLEAR)"

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
		@$(CC) $(FLAGS) -o $@ $(OBJS) $(MAIN_INC)
		$(DONE)

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	$(CLEAN)

re: fclean all

.PHONY : clean fclean re