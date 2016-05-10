/*
** my_getnbr.c for my_get_nbr in /home/roux_l/rendu/colle2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 20:39:22 2016 Guillaume Roux
** Last update Tue May  3 21:34:33 2016 quentin allary
*/

#include "include/my.h"

int	my_getnbr(char *str)
{
  int	i;
  int	j;
  int	nb;

  i = 0;
  j = 1;
  nb = 0;
  while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
    i++;
  while ((str[i] >= 48) && (str[i] <= 57) && (str[i] != '\0'))
    {
      nb = nb * 10;
      nb = nb + (str[i] - 48);
      i++;
    }
  nb = nb * j;
  if (str[0] == '-')
    nb = nb * -1;
  return (nb);
}
