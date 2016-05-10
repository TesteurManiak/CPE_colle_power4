/*
** error.c for error in /home/allary_q/rendu/sdeux/CPE_colle_semaine2/src/include
** 
** Made by quentin allary
** Login   <allary_q@epitech.net>
** 
** Started on  Tue May  3 18:42:54 2016 quentin allary
** Last update Tue May  3 21:14:24 2016 quentin allary
*/

#include "include/my.h"

int	error(t_pow *power)
{
  if (power->width > 80)
    my_puterr("Width error\n Widht maximum = 80");
  if (power->height > 16)
    my_puterr("Height erro\n Height maximum = 16");
  if ((power->height)*(power->width) < 20)
    my_puterr("Error map to small\n Map size minimum = 20");
}

int	P_error(t_pow *power, int i, int j)
{
  if (i == 0)
   my_puterr("map error: wrong size");
  if ( j == 0)
    my_puterr("name error");
  if ((power->p1) == (power->p2) || (power->p2) == (power->p1))
    my_puterr("Error players has the same names\n");
}
