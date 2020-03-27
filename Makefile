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
		./src/write.c	\
		./src/cesar.c

OBJ = $(SRC:.c=.o)

NAME = cesar

all: $(NAME)

$(NAME): 	$(OBJ) 
		 	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	rm -rf crypt

fclean: clean
	$(RM) $(NAME)

re: fclean all
