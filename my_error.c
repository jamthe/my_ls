/*
** my_error.c for my_error.c in /home/elbouh_j/PSU_2014_my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 29 18:32:38 2014 jamal elbouhali
** Last update Sun Nov 30 13:09:20 2014 jamal elbouhali
*/

#include "my.h"
#include <unistd.h>

void	my_put_error(char *str)
{
  write(2, str, my_strlen(str));
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i = i + 1;
  return (i);
}
