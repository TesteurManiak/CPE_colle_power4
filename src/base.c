/*
** base.c for base in /home/allary_q/rendu/sdeux/CPE_colle_semaine2/src/include
** 
** Made by quentin allary
** Login   <allary_q@epitech.net>
** 
** Started on  Tue May  3 18:44:18 2016 quentin allary
** Last update Tue May  3 21:31:21 2016 quentin allary
*/

#include "include/my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_puterr(char *str)
{
  write(2, str, my_strlen(str));
}

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
      i = i + 1;
  return (i);
}
