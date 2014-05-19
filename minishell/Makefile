##
## Makefile for Makefile in /home/boucha_q/rendu/PSU_2013_minishell1
## 
## Made by bouchard alexandre
## Login   <boucha_q@epitech.net>
## 
## Started on  Thu Jan 30 04:53:51 2014 bouchard alexandre
## Last update Mon May 19 14:52:32 2014 bouchard alexandre
##

SRC=	sources/main.c \
	sources/42sh.c \
	sources/my_read.c \
	sources/sources_check_alias/my_tmp_alias.c \
	sources/sources_check_alias/my_check_sh.c \
	sources/sources_check_alias/my_check_alias.c \
	sources/sources_check_alias/my_check_equal.c \
	sources/sources_check_alias/my_check_name_alias.c \
	sources/sources_check_alias/my_check_cmd_alias.c \
	sources/sources_check_alias/my_write_alias_in_tmp.c \
	sources/sources_exec_alias/my_alias.c \
        sources/sources_exec_alias/my_realloc_tab.c \
        sources/sources_exec_alias/my_cmd_buff_for_alias.c \
        sources/sources_exec_alias/my_put_alias_in_buff.c \
	sources/sources_path/get_path.c \
        sources/sources_path/my_path.c \
        sources/sources_path/my_path_to_wordtab.c \
        sources/sources_path/fill_func_path.c \
	lib/my_strcmp.c \
	lib/my_strcat.c \
	lib/my_putchar.c \
	lib/my_putstr.c \
	lib/my_putnbr.c \
	lib/my_strlen.c \
	my_get_nextline.c
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
