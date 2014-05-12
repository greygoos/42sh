/*
** mysh.h for my_sh.h in /home/le-fra_g/42sh/Greg/include
** 
** Made by le-franc
** Login   <le-fra_g@epitech.net>
** 
** Started on  Mon May 12 15:53:26 2014 le-franc
** Last update Mon May 12 17:58:23 2014 le-franc
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include "my.h"

#ifndef MYSH_H_
#define MYSH_H_

/*                                                                                                                                  
** fillfunctpath.c                                                                                                                 
*/

int     my_strlen_space(char *);
char    *fill_func_path(char *, char *);

/*                                                                                                                                 
** get_path.c
*/

int     my_match(char *, char *);
char    *fill_path(char **);
char    *get_path(char **);

/*
** main.c
*/

int	shmain(char **);
int	main(int, char **, char **);

/*
** my_prompt.c
*/

char    *my_read();
int	my_prompt(char **);

/*
** my_cd.c
*/

int     take_direction(char *);
int     aff_directory(char *, int);
int     my_cd_tiret(char **);
int     my_gohome(char **);
char    *cpydirec(int, char *, char *);
int     my_cd_exec(char *);
int     my_cd(char *, char **);

/*
** my_exit.c
*/

int	my_exit(char *);

/*
** my_path.c
*/

char    **my_path(char **, char *);
char    *test_access(char **);
int     my_execfunk(char **, char **);

/*
** my_path_to_wordtab.c
*/

int     count_line_path(char *);
int     count_long_line_path(char *, int);
char    **fill_tab_path(char *, int, int, int);
char    **my_path_to_wordtab(char *);

/*
** my_signal.c
*/

void	getsigall();
int	signal_set();

#endif
