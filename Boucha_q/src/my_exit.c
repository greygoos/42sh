/*
** my_exit.c for my_exit in /home/daniel_d/rendu
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Mon Apr 21 10:04:54 2014 daniel_d
** Last update Fri May  9 15:30:07 2014 le-franc
*/

#include "../include/my_read.h"

int	my_exit(char *buffer)
{
  char	*str;
  int	i;
  int	l;
  int	returnval;

  i = 0;
  l = 0;
  if ((str = malloc(sizeof(str) * (my_strlen(buffer) - 6))) == NULL)
    return (-1);
  if (my_strcmp("exit\n", buffer) == 2)
    returnval = 0;
  else
    {
      while (buffer[i] != ' ')
	i++;
      while (buffer[i] != '\0')
	str[l++] = buffer[i++];
      returnval = my_getnbr(str);
    }
  free(str);
  return (returnval);
}
