/*
** move.c for move in /home/roux_l/rendu/colle2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 20:43:59 2016 Guillaume Roux
** Last update Tue May  3 21:34:07 2016 quentin allary
*/

#include "include/my.h"

void	move(int player, char **board, t_pow *power, int x)
{
  int	y;
  char	*line;

  y = 0;
  while (board[y+1][x] == ' ')
    y++;
  line = board[y];
  if (player == 1)
    line[x] = power->p1;
  else
    line[x] = power->p2;
  aff_tab(board);
}
