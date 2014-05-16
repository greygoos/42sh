/*
** my_unsetenvbis.c for unsetenv in /home/daniel_d/rendu/42/42sh/Dede/src
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Fri May 16 14:39:38 2014 daniel_d
** Last update Fri May 16 14:42:34 2014 daniel_d
*/

#include "mysh.h"

int     put_tail_list(t_list **list, char *envir)
{
  t_list        *new_elem;
  t_list        *tmp;

  if ((new_elem = malloc(sizeof(*new_elem))) == NULL)
    return (0);
  new_elem->envir = envir;
  new_elem->next = NULL;
  if (*list == NULL)
    {
      *list = new_elem;
      return (0);
    }
  else
    {
      tmp = *list;
      while (tmp->next != NULL)
        tmp = tmp->next;
      tmp->next = new_elem;
      return (0);
    }
}

void    show_list(t_list **list)
{
  t_list        *tmp;

  tmp = *list;
  while (tmp->envir != NULL)
    {
      my_printf("%s\n", tmp->envir);
      tmp = tmp->next;
    }
}
