/*
** my_put_nbr.c for my_put_nbr.c in /home/elbouh_j/bibli
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Oct  8 22:09:16 2014 jamal elbouhali
** Last update Sun Nov 30 12:48:12 2014 jamal elbouhali
*/

#include "my.h"

int	my_put_nbr(int nb)
{
  int	k;

  k = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  while (nb / k > 9)
    {
      k = k * 10;
    }
  while (k > 0)
    {
      my_putchar ((nb / k) % 10 + 48);
      k = k / 10;
    }
  return (0);
}
