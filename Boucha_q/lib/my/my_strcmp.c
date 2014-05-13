/*
** my_strcmp.c for my_strcmp.c in /home/daniel_d/rendu/Piscine-C-Jour_06/ex_05
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Fri Oct 11 16:15:36 2013 daniel_d
** Last update Mon Mar  3 15:18:35 2014 daniel_d
*/

#include <stdio.h>
#include "my.h"

int     my_strcmp(char *s1, char *s2)
{
  int b;
  int c;

  b = my_strlen(s1);
  c = my_strlen(s2);
  if (s1 == NULL || s2 == NULL)
    return (1);
  if (b != c)
    return (1);
  b = 0;
  while (s1[b] != '\0')
    {
      if (s1[b] != s2[b])
        return (1);
      b++;
    }
  return (2);
}
