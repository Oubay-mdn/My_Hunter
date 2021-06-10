##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##


RM	=	rm -f

SRC	=	src/main.c \
		src/para2.c \
		src/inivariable.c \
		src/inivariable2.c \
		src/parallax.c \
		src/my_putstr.c \
		src/clic.c		\
		src/dragon.c	\
		src/my_put_nbr.c \
		src/menu.c		\
		src/gestion.c	\
		src/score.c		\
		src/stat.c		\
		src/life.c		\
		src/my_putchar.c

OBJS	=	$(SRC:.c=.o)

NAME	=	my_hunter

all: $(OBJS)
	gcc $(OBJS) -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio -I include/ -o $(NAME) -g3

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
