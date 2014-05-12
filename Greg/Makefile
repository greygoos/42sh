##
## Makefile for Makefile in /home/boucha_q/rendu/PSU_2013_minishell1
## 
## Made by bouchard alexandre
## Login   <boucha_q@epitech.net>
## 
## Started on  Thu Jan 30 04:53:51 2014 bouchard alexandre
## Last update Mon May 12 18:26:20 2014 le-franc
##

## -------------- init ------------- ##

CC	= gcc

RM	= rm -f

CFLAGS	+= -I ./include/ -L lib -lmy
CFLAGS	+= -Wall -Wextra -Werror

## -------------- lib -------------- ##

LNAME	= lib/libmy.a

LSRC	= lib/*.c

LOBJ    = $(LSRC:.c=.o)

# ------------ programme ----------- ##

NAME	= 	42sh

SRC	= 	src/main.c \
		src/my_cd.c \
		src/my_echo.c \
		src/my_exit.c \
		src/my_signal.c

OBJ	= 	$(SRC:.c=.o)

all	: 	$(NAME) $(LNAME)

$(LNAME): $(LOBJ)
	@ar rc $(LNAME) $(LSRC) $(LOBJ)
	@cp lib/my/my.h include/
	@echo -e "\E[33;32m<############## Compilation lib ##############>\E[33;0m"

$(NAME)	: $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo -e "\E[33;32m<############## Compilation programme ##############>\E[33;0m"

clean	:
	$(RM) $(OBJ)
	@echo -e "\E[33;32m<############## clean ##############>\E[33;0m"

fclean	: clean
	$(RM) $(NAME)
	@echo -e "\E[33;32m<############## fclean ##############>\E[33;0m"

re	: fclean all
	@echo -e "\E[33;32m<############## re ##############>\E[33;0m"

exe	: all clean
	@echo -e "\E[33;32m<############## exe ##############>\E[33;0m"
