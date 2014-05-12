/*
** my.h for my in /home/boucha_q/rendu/Piscine-C-lib/my/,Piscine-C-include
**
** Made by boucha_q
** Login   <boucha_q@epitech.net>
**
** Started on  Fri Oct 11 10:50:43 2013 boucha_q
** Last update Mon May 12 18:00:20 2014 le-franc
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	my_putchar(char);
int	my_isneg(int);
int	my_put_nbr(int);
int	my_swap(int *, int*);
void	my_putstr(char *);
int	my_strlen(char *);
char	*my_strcpy(char *, char *);
char	*my_strncpy(char *, char *, int);
char	*my_revstr(char *);
char    *my_strcat(char *, char *);
int     my_getnbr(char *);
char    *my_strdup(char *);
int     my_str_isalpha(char *);
char    *my_strncat(char *, char *, int);
int	my_strcmp(char *, char *);

#endif
