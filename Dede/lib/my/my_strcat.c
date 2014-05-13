/*
** my_strcat.c for char *my_strcat(char *dest, char *src) in /home/boucha_q/rendu/Piscine-C-Jour_07/ex_01
** 
** Made by boucha_q
** Login   <boucha_q@epitech.net>
** 
** Started on  Tue Oct  8 09:33:20 2013 boucha_q
** Last update Tue May 13 11:55:22 2014 daniel_d
*/

#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  n = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest [n] = src[i];
      n = n + 1;
      i = i + 1;
    }
  return (dest);
}
