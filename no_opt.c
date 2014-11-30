/*
** main.c for main in /home/elbouh_j/my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Mon Nov 24 14:11:07 2014 jamal elbouhali
** Last update Sun Nov 30 13:11:06 2014 jamal elbouhali
*/

#include <dirent.h>
#include <stdio.h>
#include "my.h"

int		no_option()
{
  DIR		*dirp;
  struct dirent	*entry;
  char		*str;

  if ((dirp = opendir("./")) == NULL)
    {
      my_putstr("error");
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
