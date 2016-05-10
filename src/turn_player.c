/*
** turn_player.c for turn_player in /home/roux_l/rendu/colle2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 20:32:04 2016 Guillaume Roux
** Last update Tue May  3 21:35:02 2016 quentin allary
*/

#include "include/my.h"

int	turn_p1(t_pow *power, char **board)
{
  int	value;

  value = -1;
  while (value <= 0)
  {
    my_putstr("Player ");
    my_putchar(power->p1);
    my_putstr(", where do you want to play: ");
    value = my_getnbr(get_next_line(0));
  }
  return (value);
}

int	turn_p2(t_pow *power, char **board)
{
  int	value;
  
  value = -1;
  while (value <= 0)
  {
    my_putstr("Player ");
    my_putchar(power->p2);
    my_putstr(", where do you want to play: ");
    value = my_getnbr(get_next_line(0));
  }
  return (value);
}
