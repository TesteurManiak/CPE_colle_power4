##
## Makefile for makefile in /home/roux_l/rendu/CPE_colle_semaine2
## 
## Made by Guillaume Roux
## Login	 <roux_l@epitech.net>
## 
## Started on	Tue May	3 18:23:06 2016 Guillaume Roux
## Last update	Tue May	3 18:23:06 2016 Guillaume Roux
##

NAME	=	power4

SRC	=	./src/main.c \
		./src/init_pow.c \
		./src/get_next_line.c \
		./src/free.c \
		./src/make_tab.c \
		./src/turn_player.c \
		./src/my_getnbr.c \
		./src/move.c \
		./src/base.c \
		./src/error.c \
		./src/aff_tab.c \
		./src/my_strcmp.c

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re