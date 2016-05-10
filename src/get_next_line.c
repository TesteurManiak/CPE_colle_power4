/*
** get_next_line.c for getnext in /home/allary_q/rendu/sdeux/CPE_colle_semaine2/src
** 
** Made by quentin allary
** Login   <allary_q@epitech.net>
** 
** Started on  Tue May  3 19:08:00 2016 quentin allary
** Last update Tue May  3 19:08:02 2016 quentin allary
*/

#include "include/my.h"

char	*get_next_line(const int fd)
{
  char	*res;
  char	buffer;
  int	a;

  a = read(fd, &buffer, 1);
  if (a == 0 || a == -1)
    return (NULL);
  a = 0;
  res = malloc(sizeof(char) * 10000);
  res[a] = buffer;
  a++;
  while (buffer != '\n' && a < 10000)
    {
      read(fd, &buffer, 1);
      res[a] = buffer;
      a++;
    }
  if (a >= 10000)
    {
      my_puterr("Error in line\n");
      return (NULL);
    }
  res[a - 1] = '\0';
  return (res);
}
