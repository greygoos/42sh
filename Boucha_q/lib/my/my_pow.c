/*
** main.c for tes in /home/daniel_d/rendu
** 
** Made by daniel_d
** Login   <daniel_d@epitech.net>
** 
** Started on  Thu Apr 24 10:38:24 2014 daniel_d
** Last update Thu Apr 24 10:48:50 2014 daniel_d
*/

#include <stdio.h>
#include <stdlib.h>

int	my_pow(int nbr, int puissance)
{
  int	nbrs;

  nbrs = nbr;
  if (puissance == 0)
    nbr = 1;
  else if (puissance == 1)
    nbr = nbr;
  else
    while (puissance > 1)
      {
	nbr = nbr * nbrs;
	puissance--;
      }
  return (nbr);
}
