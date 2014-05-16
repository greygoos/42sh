/*
** my_unsetenv.c for unsetenv in /home/dumlup_i/rendu/PSU_2013_42h/unsetenv/src
** 
** Made by dumlup_i
** Login   <dumlup_i@epitech.net>
** 
** Started on  Wed May 14 18:46:22 2014 dumlup_i
** Last update Fri May 16 14:40:57 2014 daniel_d
*/

#include "mysh.h"

int     name_test(t_list **list, char *name)
{
  t_list	*tmp;
  int	a;
  int   c;

  c = 1;
  tmp = *list;
  while (tmp != NULL)
    {
      a = 0;
      while (name[a] != 0 && name[a] == tmp->envir[a])
        a++;
      if (name[a] == '\0' && tmp->envir[a] == '=')
        return (c);
      tmp = tmp->next;
      c++;
    }
  return (0);
}

int     list_cancel(t_list **list, int c)
{
  t_list	*tmp;
  t_list	*tmp2;
  int	count;

  count = 1;
  tmp = *list;
  if (c == 1)
    {
      *list = tmp->next;
      return (0);
    }
  while (count != (c - 1))
    {
      tmp = tmp->next;
      count++;
    }
  tmp2 = tmp->next;
  tmp->next = tmp2->next;
  return (0);
}

t_list     *unsetenv_list(char *name, char **env)
{
  t_list	*list;
  int   c;

  list = NULL;
  c = 0;
  while (env[c] != NULL)
    put_tail_list(&list, env[c++]);
  if ((c = name_test(&list, name)) != 0)
    list_cancel(&list, c);
  else
    {
      my_printf("%s does not exist in env\n", name);
      return (NULL);
    }
  show_list(&list);
  return (list);
}

char	**my_unsetenv(char *str, char **env)
{
  t_list *list;

  if ((list = malloc(sizeof(*list))) == NULL)
    return (NULL);
  if ((list = unsetenv_list(str, env)) == NULL)
    return (NULL);
  env = list_to_tab(list);
  return (env);
}
