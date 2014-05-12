/*
** my_strlen.c for int my_strlen(char *str) in /home/boucha_q/rendu/Piscine-C-Jour_04
** 
** Made by boucha_q
** Login   <boucha_q@epitech.net>
** 
** Started on  Thu Oct  3 15:23:12 2013 boucha_q
** Last update Fri Oct  4 21:11:43 2013 boucha_q
*/

int     my_strlen(char *str)
{
  int n;

  n = 0;
  while (str[n] != '\0')
    {
      n = n + 1;
    }
  return (n);
}
