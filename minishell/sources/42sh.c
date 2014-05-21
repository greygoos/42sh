/*
** 42sh.c for  in /home/boucha_q/rendu/PSU/PSU_2014_42/my_42sh/sources
** 
** Made by bouchard alexandre
** Login   <boucha_q@epitech.net>
** 
** Started on  Fri May 16 15:39:11 2014 bouchard alexandre
** Last update Mon May 19 16:12:24 2014 le-franc
*/

#include "../include/my.h"
#include "../include/sh.h"

int	my_42sh(char **env)
{
  char  *buff;
  char	**path;
  int	i;

  (void)env;
  my_putstr("&>");
  while ((buff = my_read()) != NULL)
    {
      buff = my_alias(buff);
      printf("%s\n", buff);
      path = my_path(env, buff);
      printf("%s\n", buff);         //affiche buff apres alias
      i = -1;
      while (path[++i] != '\0') //affiche le char **path
	{
	  my_putstr(path[i]);
	  my_putchar('\n');
	}
      /*STR_TO_WORD_TAB DU BUFF*/
      /*CHECK DES BUILTINS GRACE A STRCMP DE TAB[0]*/
      /*CHECK DES ACCES DU BUFF*/
      i = -1;
      if (buff[0] != '\0')
        my_putstr("\n");
      my_putstr("&>");
      free(buff);
    }
  my_putstr("exit\n");
  free(buff);
  return (0);
}