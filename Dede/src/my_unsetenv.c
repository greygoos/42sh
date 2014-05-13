/*
** my_unsetenv.c for unsetenv in /home/daniel_d/rendu/42/42sh/Dede/src
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Tue May 13 10:56:51 2014 daniel_d
** Last update Tue May 13 11:53:37 2014 daniel_d
*/

#include "mysh.h"

char	**my_unsetenv(char *cmd, char **env)
{
  printf("cmd = %s env[0] = %s\n", cmd, env[0]);
  return (env);
}
