##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile Compilation
##

CC = gcc

RM = rm -f

CFLAGS = -I./include
CFLAGS += -W -Wall -Wextra -g3

SRC =	./src/main.c	\
		./src/write.c

OBJ = $(SRC:.c=.o)

NAME = cesar

all: $(NAME)

$(NAME): 	$(OBJ) 
		 	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	make fclean -C

re: fclean all
