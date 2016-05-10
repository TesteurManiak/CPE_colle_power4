/*
** make_tab.c for make_tab in /home/roux_l/rendu/colle2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 19:48:40 2016 Guillaume Roux
** Last update Tue May  3 21:33:46 2016 quentin allary
*/

#include "include/my.h"

int	my_strlen_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

char	*make_tab2(int width)
{
  int	x;
  char	*new_line;

  x = 0;
  new_line = malloc(sizeof(char) * (width + 1));
  while (x < (width + 1))
  {
    new_line[x] = '-';
    x++;
  }
  new_line[0] = '+';
  new_line[width + 1] = '+';
  return (new_line);
}

void	make_tab(char **tab, t_pow *power)
{
  int	x;
  int	y;
  char	*line;

  y = 0;
  while (y <= power->height)
  {
    line = malloc(sizeof(char) * (power->width + 1));
    x = 0;
    while (x < (power->width + 1))
    {
      line[x] = ' ';
      x++;
    }
    line[0] = '|';
    line[power->width + 1] = '|';
    if (y == (power->height))
      line = make_tab2(power->width);
    tab[y] = line;
    y++;
  }
}
