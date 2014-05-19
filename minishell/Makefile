##
## Makefile for Makefile in /home/le-fra_g/minishel
## 
## Made by le-franc
## Login   <le-fra_g@epitech.net>
## 
## Started on  Fri May 16 16:31:08 2014 le-franc
## Last update Mon May 19 14:22:32 2014 le-franc
##

CC	= gcc

RM	= rm -f

NAME	= 42sh

CFLAGS	+= -Wall -Wextra
CFLAGS	+= -I./include/

SRC	= src/main.c

LIB	= lib/my_putchar.c \
	lib/my_putstr.c \
	lib/my_strlen.c \
	lib/my_strcat.c \
	lib/my_strcmp.c \
	lib/my_strncmp.c \
	lib/my_strdup.c \
	lib/my_nmatch.c \
	lib/my_str_to_wordtab.c \
	lib/my_getnbr.c \
	lib/my_putnbr.c \

OBJ	= $(SRC:.c=.o)

OBJ2	= $(LIB:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ2)
		$(CC) $(OBJ) $(OBJ2) -o $(NAME)

clean:
		$(RM) $(OBJ) $(OBJ2)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all