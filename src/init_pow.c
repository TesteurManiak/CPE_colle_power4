/*
** init_pow.c for init_pow in /home/roux_l/.local/share/Trash/files/CPE_colle_semaine2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 18:43:40 2016 Guillaume Roux
** Last update Tue May  3 21:32:20 2016 quentin allary
*/

#include "include/my.h"

void	init_pow(t_pow **power)
{
  *power = malloc(sizeof(**power));
  (*power)->width = D_WIDTH;
  (*power)->height = D_HEIGHT;
  (*power)->ia = 0;
  (*power)->kill = 0;
  (*power)->p1 = D_P1;
  (*power)->p2 = D_P2;
  (*power)->arb = D_ARB;
}
