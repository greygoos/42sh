/*
** my.h for my in /home/boucha_q/rendu/Piscine-C-lib/my/,Piscine-C-include
**
** Made by boucha_q
** Login   <boucha_q@epitech.net>
**
** Started on  Fri Oct 11 10:50:43 2013 boucha_q
** Last update Mon May 12 17:22:56 2014 le-franc
*/

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int*b);
void	my_putstr(char *str);
int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_revstr(char *str);
char    *my_strcat(char *dest, char *src);
int     my_getnbr(char *str);
char    *my_strdup(char *src);
int     my_str_isalpha(char *str);
char    *my_strncat(char *dest, char *src, int f);
