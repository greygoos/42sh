/*
** main.c for 42sh in /home/daniel_d/rendu/42/42sh/Dede/src
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Mon May 12 15:50:50 2014 daniel_d
** Last update Mon May 12 17:56:04 2014 le-franc
*/

#include "../include/my.h"
#include "../include/mysh.h"

int	shmain(char **env)
{
  signal_set();
  my_prompt(env);
  return (0);
}

int	main(int ac, char **av, char **env)
{
  if (env[0] == NULL)
    {
      printf("ERROR : no environement\n");
      return (-1);
    }
  if (ac > 1 && my_strcmp("--help", av[1]) == 0)
    printf("USAGE : %s [--help]\n", av[0]);
  else
    if (shmain(env) == -1)
      return (-1);
  return (0);
}
