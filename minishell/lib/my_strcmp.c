/*
** my_strcmp.c for int my_strcmp(char *s1,char *s2) in /home/boucha_q/rendu/Piscine-C-Jour_06/ex_5
** 
** Made by boucha_q
** Login   <boucha_q@epitech.net>
** 
** Started on  Sat Oct 19 16:31:45 2013 boucha_q
** Last update Thu Apr 24 14:36:02 2014 bouchard alexandre
*/

int	my_strcmp(char *str1, char *str2)
{
  int	a;
  int	n;
  n = 0;
  a = 0;
  while ( str1[a] != '\0' || str2[a] != '\0')
    {
      if ( str1[a] != str2[a])
	{
	  n = str1[a] - str2[a];
	  return (n);
	}
      a = a + 1;
    }
  return (0);
}
