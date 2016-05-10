/*
** free.c for free in /home/roux_l/rendu/colle2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 19:44:49 2016 Guillaume Roux
** Last update Tue May  3 21:31:52 2016 quentin allary
*/

#include "include/my.h"

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
  {
    free(tab[i]);
    i++;
  }
  free(tab);
}
