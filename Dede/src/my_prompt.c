/*
** my_prompt.c for 42 in /home/daniel_d/rendu/42/42sh/Dede/src
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Mon May 12 16:52:36 2014 daniel_d
<<<<<<< HEAD
** Last update Fri May 16 14:30:29 2014 le-franc
=======
** Last update Tue May 13 16:37:22 2014 daniel_d
>>>>>>> b21663bfbd2832b340ba1f9b47953530bfa2d55f
*/

#include "mysh.h"
#include "my.h"

char    *my_read()
{
  char  *buff;
  char  *tmp;
  int   rd;

  rd = 0;
  if ((buff = malloc(sizeof(*buff) * 1)) == NULL ||
      (tmp = malloc(sizeof(*tmp) * 2)) == NULL)
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

char	**my_check_cmd(char *cmd, char **env)
{
  if (my_nmatch("cd", cmd, 2) == 0 || my_nmatch("..", cmd, 2) == 0)
    my_cd(cmd, env);
  else if (my_nmatch("echo", cmd, 4) == 0)
    my_echo(cmd);
  else if (my_nmatch("setenv", cmd, 6) == 0)
    env = my_setenv(cmd, env);
  else if (my_nmatch("unsetenv", cmd, 8) == 0)
    env = my_unsetenv(cmd, env);
  else
    my_exec(cmd, env);
  return (env);
}

int     my_prompt(char **env)
{
  char  *cmd;

  signal_set();
  my_putstr(PROMPT);
  while ((cmd = my_read()) != NULL)
    {
      if ((env = my_check_cmd(cmd, env)) == NULL)
	return (-1);
      if (cmd[0] == '\0')
	my_putstr("\n");
      my_putstr("$>");
      free(cmd);
    }
  my_putstr("exit\n");
  return (0);
}
