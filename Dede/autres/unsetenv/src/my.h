/*
** my.h for my.h in /home/dumlup_i/rendu/PSU_2013_42h/unsetenv/src
** 
** Made by dumlup_i
** Login   <dumlup_i@epitech.net>
** 
** Started on  Wed May 14 18:54:22 2014 dumlup_i
** Last update Fri May 16 15:26:59 2014 dumlup_i
*/

#ifndef MY_H_
#define MY_H_

typedef struct          s_list
{
  char          *envir;
  struct s_list *next;
}t_list; 

void    show_list(t_list **list);
int     put_tail_list(t_list **list, char *envir);

#endif
