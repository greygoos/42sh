/*
** my_read.c for  in /home/boucha_q/rendu/PSU/PSU_2014_42/my_42sh/sources
** 
** Made by bouchard alexandre
** Login   <boucha_q@epitech.net>
** 
** Started on  Fri May 16 15:42:15 2014 bouchard alexandre
** Last update Mon May 19 16:12:44 2014 le-franc
*/

#include "../include/my.h"
#include "../include/sh.h"

char    *my_read()
{
  char  *buff;
  char  *tmp;
  int   rd;

  rd = 0;
  if ((buff = malloc(sizeof(char *) * 1)) == NULL)
    return (NULL);
  if ((tmp = malloc(sizeof(char *) * 2)) == NULL)
    return (NULL);
  buff[0] = '\0';
  tmp[1] = '\0';
  while ((rd = read(0, tmp, 1)) != 0 && rd != -1)
    {
      if (tmp[0] == '\n')
	{
	  free(tmp);
	  return (buff);
	}
      buff = my_strcat(buff, tmp);
    }
  free(buff);
  free(tmp);
  return (NULL);
}
