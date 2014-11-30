/*
** my_ls.c for my_ls in /home/elbouh_j/my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Nov 26 13:25:31 2014 jamal elbouhali
** Last update Sun Nov 30 13:24:25 2014 jamal elbouhali
*/

# define _BSD_SOURCE
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include "my.h"

char	*change(char *str)
{
  int	i;

  i = 0;
  while (i != 16)
    {
      str[i] = str[i + 4];
      i = i + 1;
    }
  str[i - 4] = 0;
  return (str);
}

int		siztim(struct stat sb)
{
  my_put_nbr(sb.st_size);
  my_putchar(' ');
  my_putstr(change(ctime(&sb.st_mtime)));
  return (0);
}

int		usgrp(struct stat sb)
{
  struct passwd	*user;
  struct group	*grp;

  my_putchar((sb.st_mode & S_IRUSR) ? 'r' : '-');
  my_putchar((sb.st_mode & S_IWUSR) ? 'w' : '-');
  my_putchar((sb.st_mode & S_IXUSR) ? 'x' : '-');
  my_putchar((sb.st_mode & S_IRGRP) ? 'r' : '-');
  my_putchar((sb.st_mode & S_IWGRP) ? 'w' : '-');
  my_putchar((sb.st_mode & S_IXGRP) ? 'x' : '-');
  my_putchar((sb.st_mode & S_IROTH) ? 'r' : '-');
  my_putchar((sb.st_mode & S_IWOTH) ? 'w' : '-');
  my_putchar((sb.st_mode & S_IXOTH) ? 'x' : '-');
  user = getpwuid(sb.st_uid);
  grp = getgrgid(sb.st_gid);
  my_putchar(' ');
  my_putstr(user->pw_name);
  my_putchar(' ');
  my_putstr(grp->gr_name);
  my_putchar(' ');
  return (0);
}

int		type(struct stat sb)
{
  if (S_ISREG(sb.st_mode) == 1)
    my_putchar('-');
  else if (S_ISDIR(sb.st_mode) == 1)
    my_putchar('d');
  else if (S_ISLNK(sb.st_mode) == 1)
    my_putchar('l');
  return (0);
}

int		option_l()
{
  char		*str;
  DIR		*dirp;
  struct dirent	*entry;
  struct stat	sb;

  if ((dirp = opendir("./")) == NULL)
      my_put_error("error");
  while ((entry = readdir(dirp)) != NULL)
    {
      str = entry->d_name;
      if (str[0] != '.')
	{
	  if (lstat(entry->d_name, &sb) != -1)
	    {
	      type(sb);
	      usgrp(sb);
	      siztim(sb);
	      my_putchar(' ');
	      my_putstr(entry->d_name);
	      my_putchar('\n');
	    }
	}
    }      
  closedir(dirp);
  return (0);
}
