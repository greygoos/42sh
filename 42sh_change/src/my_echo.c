/*
** my_echo.c for my_echo in /home/daniel_d/rendu
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Wed Apr 23 09:08:51 2014 daniel_d
** Last update Mon May 12 17:25:22 2014 le-franc
*/

#include "../include/mysh.h"
#include "../include/my.h"

/*
**  optn = options
**  e = 1
** E = 2
**  n = 5
*/

int	check_optn(int optn, int opt)
{
  if (optn != 1 && optn != 3 && optn != 6 && opt == 1)
    {
      if (optn == 2 || optn == 7 || optn == 8)
	optn = optn - 2;
      optn = optn + 1;
    }
  else if (optn != 2 && optn != 3 && optn != 7 && opt == 2)
    {
      if (optn == 1 || optn == 6 || optn == 8)
	optn = optn - 1;
      optn = optn + 2;
    }
  else if (optn != 5 && optn != 6 && optn != 7 && optn != 8 && opt == 5)
    optn = optn + 5;
  return (optn);
}

int	my_check(char c)
{
  int	opt;

  opt = 0;
  if (c == 'e')
    opt = 1;
  else if (c == 'E')
    opt = 2;
  else if (c == 'n')
    opt = 5;
  return (opt);
}

int	parsing_echo(char *buffer)
{
  int	opt;
  int	optn;
  int	i;

  optn = 0;
  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '-')
	{
	  while (buffer[i] != ' ' && buffer[i] != '\0')
	    {
	      if ((opt = my_check(buffer[i])) == -1)
		return (-1);
	      optn = check_optn(optn, opt);
	      i = i + 1;
	    }
	}
      i = i + 1;
    }
  return (optn);
}

int	check_start(char *buffer)
{
  int	i;

  i = 4;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '-')
	{
	  if  (buffer[i + 1] == 'e' || buffer[i + 1] == 'E'
	       || buffer[i + 1] == 'n')
	    {
	      i = i + 1;
	      while (buffer[i] == 'e' || buffer[i] == 'E' || buffer[i] == 'n')
		i = i + 1;
	    }
	  else
	    return (i);
	}
      else if (buffer[i] == ' ' || buffer [i] == '\t')
	i++;
      else
	return (i);
    }
  return (i);
}

int	my_optn_e_maj(char *buffer)
{
  int	cote;
  int	i;

  cote = 0;
  i = check_start(buffer);
  while (buffer[i] != '\0')
    {
      if (buffer[i] == 34 && buffer[i - 1] != 92 && cote == 0)
	cote = 1;
      else if (buffer[i] == 34 && buffer[i - 1] != 92 && cote == 1)
	cote = 0;
      else
	{
	  if (cote == 0)
	    {
	      if (buffer[i] == 92)
		i++;
	      write(1, &buffer[i], 1);
	    }
	  else
	    write(1, &buffer[i], 1);
	}
      i++;
    }
}

int	my_optn_e_min(char *buffer)
{
  int	cote;
  int	i;

  cote = 0;
  i = check_start(buffer);
  while (buffer[i] != '\0')
    {
      if (buffer[i] == 34 && buffer[i - 1] != 92 && cote == 0)
	cote = 1;
      else if (buffer[i] == 34 && buffer[i - 1] != 92 && cote == 1)
	cote = 0;
      else
	{
	  if (cote == 0)
	    {
	      if (buffer[i] == 92)
		i++;
	      write(1, &buffer[i], 1);
	    }
	  else
	    write(1, &buffer[i], 1);
	}
      i++;
    }
  return (0);
}

int	my_echo(char *buffer)
{
  int	optn;

  optn = 0;
  if ((optn = parsing_echo(buffer)) == -1)
    return (-1);
  if (optn == 1 || optn == 3 || optn == 6)
    my_optn_e_min(buffer);
  else
    my_optn_e_maj(buffer);
  if (optn != 5 && optn != 6 && optn != 7 && optn != 8)
    my_putchar('\n');
}

int     main(int ac, char **av)
{
  int   r;
  char  *buffer;

  if (((buffer = malloc(sizeof(buffer) * 50))) == NULL)
    return (0);
  r = 0;
  while ((r = read(0, buffer, 49)) != -1)
    {
      r--;
      while (r < 50)
        buffer[r++] == '\0';
      my_echo(buffer);
      free(buffer);
      if (((buffer = malloc(sizeof(buffer) * 50))) == NULL)
        return (0);
    }
}
