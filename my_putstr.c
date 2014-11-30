/*
** my_putstr.c for my_putstr.c in /home/elbouh_j/PSU_2014_my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 29 16:21:57 2014 jamal elbouhali
** Last update Sun Nov 30 12:36:01 2014 jamal elbouhali
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
