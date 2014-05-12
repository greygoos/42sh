/*
** my_prompt.c for 42 in /home/daniel_d/rendu/42/42sh/Dede/src
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Mon May 12 16:52:36 2014 daniel_d
** Last update Mon May 12 17:47:08 2014 daniel_d
*/

#include "../include/my.h"
#include "../include/mysh.h"

char    *my_read()
{
  char  *buff;
  char  *tmp;
  int   rd;

  rd = 0;
  if ((buff = malloc(sizeof(*buff) * 1)) == NULL)
    return (NULL);
  if ((tmp = malloc(sizeof(*tmp) * 2)) == NULL)
    return (NULL);
  buff[0] = '\0';
  tmp[1] = '\0';
  while ((rd = read(0, tmp, 1)) != 0 && rd != -1)
    {
      if (tmp[0] == '\n')
        return (buff);
      buff = my_strcat(buff, tmp);
    }
  return (NULL);
}

int     my_prompt(char **env)
{
  char  *buff;
  char **cmd;
  int n;
  char *path;

  n = 0;
  my_putstr("&>");
  while ((buff = my_read()) != NULL)
    {
      /*
      while (cmd[n] != NULL)
        {
          if (cmd[n + 1] == NULL)
            cmd[n][my_strlen(cmd[n]) -1] = 0;
          n++;
        }
      */ /*       utilité ?      */
      if (buff[0] == '\0')
        my_putchar('\n');
      my_commande(path, cmd[0]);
      my_putstr("&>");
    }
  return (0);
}
