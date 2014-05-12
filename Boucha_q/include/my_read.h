/*
** proto.h for  in /home/boucha_q/rendu/PSU_42
** 
** Made by bouchard alexandre
** Login   <boucha_q@epitech.net>
** 
** Started on  Mon Apr 14 09:03:31 2014 bouchard alexandre
** Last update Fri May  9 15:27:03 2014 le-franc
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include "my.h"

#ifndef PROTO_H_
# define PROTO_H_

/*
** MY_READ.C
*/

char	*my_read();

/*
** fillfunctpath.c
*/

int	my_strlen_space(char *);
char	*fill_func_path(char *, char *);

/*
** get_path.c
*/

int     my_match(char *, char *);
char    *fill_path(char **);
char	*get_path(char **);

/*
** my_path.c
*/

char	**my_path(char **, char *);
char	*test_access(char **);
int	my_execfunk(char **, char **);

/*
**my_path_to_wordtab.c
*/

int     count_line_path(char *);
int	count_long_line_path(char *, int);
char	**fill_tab_path(char *, int, int, int);
char	**my_path_to_wordtab(char *);

/*
** MY_CD.C
*/

int	take_direction(char *);
int	aff_directory(char *, int);
int	my_cd_tiret(char **);
int	my_gohome(char **);
char	*cpydirec(int, char *, char *);
int	my_cd_exec(char *);
int	my_cd(char *, char **);

/*
** MY_EXIT.C
*/

int	my_exit(char *);

/*
** MAIN.C
*/

char	*my_read();
void	my_commande(char **, char *);

#endif
