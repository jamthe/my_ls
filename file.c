/*
** file.c for file.c in /home/elbouh_j/PSU_2014_my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sun Nov 30 16:34:38 2014 jamal elbouhali
** Last update Sun Nov 30 16:57:06 2014 jamal elbouhali
*/

#include "my.h"
#include <dirent.h>
#include <stdio.h>

int             file(int x, char **av)
{
  DIR		*dirp;
  struct dirent	*entry;
  char          *str;

  if ((dirp = opendir(av[x])) == NULL)
    {
      my_putstr("error\n");
      return (1);
    }
  while ((entry = readdir(dirp)) != NULL)
    {
      str = entry->d_name;
      if (str[0] != '.')
        {
          my_putstr(entry->d_name);
          my_putstr("  ");
        }
    }
  closedir(dirp);
  my_putchar('\n');
  return (0);
}
