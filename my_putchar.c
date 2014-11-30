/*
** my_putchar.c for my_putchar.c in /home/elbouh_j/PSU_2014_my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 29 16:20:31 2014 jamal elbouhali
** Last update Sun Nov 30 12:34:51 2014 jamal elbouhali
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
