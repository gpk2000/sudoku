NAME=sudoku

CC=gcc
SRC_DIR := src
FLAGS=-Wall -Werror -Wextra
SRC := $(wildcard $(SRC_DIR)/*.c)
RM =rm -rf

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(LIBS) $(SRC) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

run: re
	./$(NAME)
