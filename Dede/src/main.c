/*
** main.c for 42sh in /home/daniel_d/rendu/42/42sh/Dede/src
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Mon May 12 15:50:50 2014 daniel_d
** Last update Mon May 12 16:52:19 2014 daniel_d
*/

#include <stdlib.h>
#include <stdio.h>

int	shmain(char **env)
{
  my_signal();
  my_prompt(env);
}

int	main(int ac, char **av, char **env)
{
  if (env[0] == NULL)
    {
      printf("ERROR : no environement\n");
      return (-1);
    }
  if (ac > 1 && strcmp("--help", av[1]) == 0)
    printf("USAGE : %s [--help]\n", av[0]);
  else
    if (shmain(env) == -1)
      return (-1);
  return (0);
}
