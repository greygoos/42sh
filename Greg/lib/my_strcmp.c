/*
** my_strcmp.c for int my_strcmp(char *s1,char *s2) in /home/boucha_q/rendu/Piscine-C-Jour_06/ex_5
** 
** Made by boucha_q
** Login   <boucha_q@epitech.net>
** 
** Started on  Sat Oct 19 16:31:45 2013 boucha_q
** Last update Sun Mar  9 17:11:13 2014 bouchard alexandre
*/

int	my_strcmp(char *s1, char *s2)
{
  int	a;
  int	n;
  n = 0;
  a = 0;
  while ( s1[a] != '\0' || s2[a] != '\0')
    {
      if ( s1[a] != s2[a])
	{
	  n = s1[a] - s2[a];
	  return (n);
	}
      a = a + 1;
    }
  return (0);
}
