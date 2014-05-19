##
## Makefile for Makefile in /home/dumlup_i/rendu/PSU_2013_42h/unsetenv/src
## 
## Made by dumlup_i
## Login   <dumlup_i@epitech.net>
## 
## Started on  Wed May 14 19:19:51 2014 dumlup_i
## Last update Fri May 16 16:19:50 2014 aubry_f
##

SRC=	src/my_unsetenv.c \
	src/my_unsetenv_fct.c

OBJ=	$(SRC:.c=.o)

NAME=	unsetenv

RM=	rm -f

CFLAGS=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
