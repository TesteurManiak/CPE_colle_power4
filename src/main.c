/*
** main.c for main in /home/roux_l/rendu/CPE_colle_semaine2/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 18:26:11 2016 Guillaume Roux
** Last update Tue May  3 21:47:03 2016 quentin allary
*/

#include "include/my.h"

void	launch_game(char **board, t_pow *power)
{
  int	val_p1;
  int	val_p2;

  while (power->kill == 0)
  {
    val_p1 = turn_p1(power, board);
    move(1, board, power, val_p1);
    //check_win(board, power->p1, power);
    val_p2 = turn_p2(power, board);
    //check_win(board, power->p2, power);
    move(2, board, power, val_p2);
  }
  if (power->kill == 1)
    my_putstr("you win !\n");
}

void	game_arg(char **args, t_pow *power)
{
  int	i;
  i = 1;
  while (args[i] != '\0')
    {
      if (my_strcmp(args[i], "-w") == 0)
	power->width == my_getnbr(args[i + 1]);
      else if (args[i] == "-h")
	power->height == my_getnbr(args[i + 1]);
      else if (args[i] == "-p2")
	 power->p2 == my_getnbr(args[i + 1]);
       else if (args[i] == "-p1")
	 power->p1 == my_getnbr(args[i + 1]);
      i = i + 2;
    }
    pouw(power);
}

void	pouw(t_pow *power)
{
  char	**board;

  board = malloc(sizeof(char *) * power->width * power->height + 2);
  make_tab(board, power);
  launch_game(board, power);
}

int	check_arg(char **args, t_pow *power)
{
  if (args[1] == NULL)
    pouw(power);
  else
    game_arg(args, power);
}

int	main(int ac, char **av)
{
  t_pow	*power;

  init_pow(&power);
  if (ac >= 1)
    check_arg(av, power);
  return (0);
}
