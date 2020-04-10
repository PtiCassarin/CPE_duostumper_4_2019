##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile Compilation
##

CC = gcc

RM = rm -f

CFLAGS = -I./include
CFLAGS += -W -Wall -Wextra

SRC =	./src/main.c	\
		./src/analyse_buff.c	

OBJ = $(SRC:.c=.o)

NAME = fridge

all: $(NAME)

$(NAME): $(OBJ) 
	 $(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	rm -rf crypt

fclean: clean
	$(RM) $(NAME)

re: fclean all
