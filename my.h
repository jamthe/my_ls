/*
** my.h for my.h in /home/elbouh_j/PSU_2014_my_ls
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 29 19:18:37 2014 jamal elbouhali
** Last update Sun Nov 30 13:19:16 2014 jamal elbouhali
*/

#ifndef MY_H_
# define MY_H_

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

int	my_strlen(char *str);
void	my_put_error(char *str);
char	*change(char *str);
int	siztim(struct stat sb);
int	usgrp(struct stat sb);
int	type(struct stat sb);
int	option_l();
void	my_putchar(char c);
int	my_put_nbr(int nb);
void	my_putstr(char *str);
int	no_option();
int	main(int ac, char **av);

#endif /* !MY_H_ */
