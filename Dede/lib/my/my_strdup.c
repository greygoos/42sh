/*
** my_strdup.c for my_strdup.c in /home/daniel_d/rendu/Piscine-C-Jour_08/ex_01
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Wed Oct  9 11:04:29 2013 daniel_d
** Last update Fri May 16 14:11:16 2014 daniel_d
*/

#include <stdlib.h>

char    *my_strdup(char *src)
{
  char  *dest;
  int   r;

  r = 0;
  if (src == NULL)
    return (NULL);
  while (src[r++] != '\0');
  if ((dest = malloc(sizeof(*dest) * (r + 1))) == NULL)
    return (NULL);
  r = 0;
  while (src[r] != '\0')
    {
      dest[r] = src[r];
      r = r + 1;
    }
  dest[++r] = '\0';
  free(src);
  return (dest);
}
