##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile Compilation
##

CC = gcc

RM = rm -f

CFLAGS = -I./include
CFLAGS += -g3

SRC =	./src/main.c	\
		./src/analyse_buff.c	\
		./src/make.c			\
		./src/init.c			

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
