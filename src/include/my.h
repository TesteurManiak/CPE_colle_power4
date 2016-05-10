/*
** my.h for my in /home/roux_l/rendu/CPE_colle_semaine2/src/include
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 3 18:27:51 2016 Guillaume Roux
** Last update Tue May  3 21:37:19 2016 quentin allary
*/

#ifndef MY_H_
# define MY_H_

# define D_WIDTH (7)
# define D_HEIGHT (6)
# define D_P1 ('X')
# define D_P2 ('O')
# define D_ARB ('#')

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_pow
{
  int		width;
  int		height;
  int		ia;
  int		kill;
  char		p1;
  char		p2;
  char		arb;
}		t_pow;

int my_strcmp(char *s1, char *s2);
int	my_strlen(char *str);
int	turn_p2(t_pow *power, char **board);
int	turn_p1(t_pow *power, char **board);
int	my_getnbr(char *str);

char	*get_next_line(const int fd);

void  pouw(t_pow *power);
void	move(int player, char **board, t_pow *power, int x);
void	my_putchar(char c);
void	my_putstr(char *str);
void	free_tab(char **tab);
void	aff_tab(char **tab);
void	init_pow(t_pow **power);
void	my_puterr(char *str);
void	make_tab(char **tab, t_pow *power);

#endif /* !MY_H_ */
