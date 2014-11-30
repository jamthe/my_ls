/*
** main.c for main.c in /home/elbouh_j/PSU_2014_my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 29 18:15:13 2014 jamal elbouhali
** Last update Sun Nov 30 13:22:02 2014 jamal elbouhali
*/

#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int		main(int ac, char **av)
{
  int		i;

  i = 1;
  if (av[1] == NULL)
    {
      no_option();
      return (0);
    }
  while (i < ac)
    {
      if (av[i][0] == '-' && av[i][1] == 'l')
        {
          option_l();
          i = i + 1;
        }
      else
	my_put_error("invalid option\n");
      exit(0);
    }
  return (0);
}
