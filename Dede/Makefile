##
## Makefile for Makefile in /home/boucha_q/rendu/PSU_2013_minishell1
## 
## Made by bouchard alexandre
## Login   <boucha_q@epitech.net>
## 
## Started on  Thu Jan 30 04:53:51 2014 bouchard alexandre
## Last update Mon May 12 18:09:23 2014 daniel_d
##

## -------------- init ------------- ##

CC	= gcc

RM	= rm -f

CFLAGS	+= -I ./include/ -L DDlib -lmy
CFLAGS	+= -Wall -Wextra -Werror

## -------------- lib -------------- ##

LNAME	= DDlib/DDlibmy.a

LSRC	= DDlib/my/my_putchar.c \
        DDlib/my/my_strlen.c \
        DDlib/my/my_putstr.c \
        DDlib/my/my_put_nbr.c \
        DDlib/my/my_put_nbr_rec.c \
        DDlib/my/my_putnbr_base.c \
        DDlib/my/my_putnbr_base_rec.c \
        DDlib/my/my_put_nbru.c \
        DDlib/my/my_getnbr.c \
        DDlib/my/my_revstr.c \
        DDlib/my/my_strcmp.c \
        DDlib/my/my_strdup.c \
        DDlib/my/my_str_to_wordtab.c \
        DDlib/my/my_format.c \
        DDlib/my/my_format2.c \
        DDlib/my/my_format3.c \
        DDlib/my/my_printf.c \
        DDlib/my/my_strdup.c \
        DDlib/my/my_needposchar.c \
        DDlib/my/get_next_line.c \
        DDlib/my/my_concat_str.c \
        DDlib/my/my_epur_str.c \
        DDlib/my/my_pow.c \
        DDlib/my/my_nmatch.c \

LOBJ    = $(LSRC:.c=.o)

# ------------ programme ----------- ##

NAME	= 42sh

SRC	= src/main.c \
	src/my_cd.c \
	src/my_echo.c \
	src/my_exit.c \
	src/my_signal.c \


OBJ	= $(SRC:.c=.o)

all	: $(NAME) $(LNAME)

$(LNAME)	: $(LOBJ)
	@ar rc $(LNAME) $(LOBJ)
	@cp DDlib/my/my.h include/
	@echo -e "\E[33;32m<############## Compilation DDlib ##############>\E[33;0m"

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
