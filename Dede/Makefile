##
## Makefile for Makefile in /home/boucha_q/rendu/PSU_2013_minishell1
## 
## Made by bouchard alexandre
## Login   <boucha_q@epitech.net>
## 
## Started on  Thu Jan 30 04:53:51 2014 bouchard alexandre
## Last update Tue May 13 13:21:57 2014 daniel_d
##

## -------------- init ------------- ##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Wextra -Werror
CFLAGS	+= -I include/ -L DDlib -lmy

## -------------- lib -------------- ##

LNAME	= lib/libmy.a

LSRC	= lib/my/my_putchar.c \
        lib/my/my_strlen.c \
        lib/my/my_putstr.c \
        lib/my/my_put_nbr.c \
        lib/my/my_put_nbr_rec.c \
        lib/my/my_putnbr_base.c \
        lib/my/my_putnbr_base_rec.c \
        lib/my/my_put_nbru.c \
        lib/my/my_getnbr.c \
        lib/my/my_revstr.c \
        lib/my/my_strcmp.c \
        lib/my/my_strdup.c \
        lib/my/my_str_to_wordtab.c \
        lib/my/my_format.c \
        lib/my/my_format2.c \
        lib/my/my_format3.c \
        lib/my/my_printf.c \
        lib/my/my_strdup.c \
        lib/my/my_needposchar.c \
        lib/my/get_next_line.c \
        lib/my/my_concat_str.c \
        lib/my/my_epur_str.c \
        lib/my/my_pow.c \
        lib/my/my_nmatch.c \
	lib/my/my_strcat.c \

LOBJ    = $(LSRC:.c=.o)

# ------------ programme ----------- ##

NAME	= 42sh

SRC	= src/main.c \
	src/my_prompt.c \
	src/my_cd.c \
	src/my_cdbis.c \
	src/my_echo.c \
	src/my_echobis.c \
	src/my_exit.c \
	src/my_signal.c \
	src/my_setenv.c \
Tue May 13 13:21:56 2014	src/my_unsetenv.c \

OBJ	= $(SRC:.c=.o)

all	: $(LNAME) $(NAME)

$(LNAME)	: $(LOBJ)
	@cp lib/my/my.h include/
	@ar rc $(LNAME) $(LOBJ)
	@echo -e "\E[33;32m<############## Compilation lib ##############>\E[33;0m"

lib	: $(LOBJ)
	@cp lib/my/my.h include/
	@ar rc $(LNAME) $(LOBJ)
	@echo -e "\E[33;32m<############## Compilation lib ##############>\E[33;0m"

$(NAME)	: $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo -e "\E[33;32m<############## Compilation programme ##############>\E[33;0m"

clean	:
	$(RM) $(OBJ)
	$(RM) $(LOBJ)
	@echo -e "\E[33;32m<############## clean ##############>\E[33;0m"

fclean	: clean
	$(RM) $(NAME)
	$(RM) $(LOBJ)
	@echo -e "\E[33;32m<############## fclean ##############>\E[33;0m"

re	: fclean all
	@echo -e "\E[33;32m<############## re ##############>\E[33;0m"

exe	: all clean
	@echo -e "\E[33;32m<############## exe ##############>\E[33;0m"
