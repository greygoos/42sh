##
## Makefile for Makefile in /home/boucha_q/rendu/PSU_2013_minishell1
## 
## Made by bouchard alexandre
## Login   <boucha_q@epitech.net>
## 
## Started on  Thu Jan 30 04:53:51 2014 bouchard alexandre
## Last update Tue May  6 10:33:13 2014 le-franc
##

SRC=	src/main.c \
	src/my_read.c \
	src/get_path.c \
	src/my_path.c \
	src/my_path_to_wordtab.c \
	src/fill_func_path.c \
	lib/my_strcmp.c \
	lib/my_putchar.c \
	lib/my_putstr.c \
	lib/my_put_nbr.c \
	lib/my_strlen.c \
	lib/my_strcat.c

OBJ=	$(SRC:.c=.o)

CC=	gcc -g

CFLAGS=	-I .
CFLAGS += -Wall -Wextra
RM=	rm -f

NAME=	mysh


all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
