##
## EPITECH PROJECT, 2018
## Hidenp
## File description:
## Compile the program
##

NAME = 		hidenp

CC =		gcc

SRC = 		src/main.c	\
		src/hidenp.c

OBJ =		$(SRC:.c=.o)

CFLAGS = 	-Wall -Wextra -I./include/

LDFLAGS = 	-L lib/my -lmy

RM = 		rm -f

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(MAKE) -C ./lib/my
		$(CC) -o $(NAME) $(OBJ) $(LIB) -lm $(LDFLAGS)

clean:
		$(RM) $(OBJ)
		$(MAKE) -C ./lib/my clean

fclean: 	clean
		$(RM) $(NAME)
		$(MAKE) -C ./lib/my fclean

re: 		fclean all

.PHONY: 	all clean fclean re
