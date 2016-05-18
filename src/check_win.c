/*
** check_win.c for check_win in /home/roux_l/GitHub/CPE_colle_semaine2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 10 14:02:25 2016 Guillaume Roux
** Last update  Tue May 10 14:02:25 2016 Guillaume Roux
*/

#include "my.h"

void  check_col(char **board, char player, t_power *power)
{
  int x;
  int y;
  int value;

  x = 0;
  y = 0;
  while(board[y][x] != '\0')
  {
    y = 0;
    value = 0;
    if (board[y][x] == player)
    {
      while (board[y][x] == player)
      {
        value++;
    }
    if (value == 4)
      power->kill = 1;
    x++;
  }
}

void  check_win(char **board, char player, t_power *power)
{
  int x;
  int y;
  int value;

  y = 0;
  while (board[y] != '\0')
  {
    x = 0;
    while (board[y][x] != '\0')
    {
      value = 0;
      if (board[y][x] == player)
      {
        while (board[y][x] == player)
        {
          value++;
          x++;
        }
      }
      if (value == 4)
        power->kill = 1;
      x++;
    }
    y++;
  }
  check_col(board, player, power);
}