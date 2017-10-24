/*
** my_put_nbr.c for my_printf in /home/ramy/my_printf
** 
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
** 
** Started on  Wed Apr  6 10:24:09 2016 FERJANI Ramy
** Last update Fri Apr  8 11:22:47 2016 FERJANI Ramy
*/

#include "my_printf.h"

void	my_put_nbr(int n)
{
  int	i;

  i = 1;
  if (n == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (n < 0)
	{
	  my_putchar('-');
	  n = -n;
	}
      while ((n / i) >= 10)
	i *= 10;
      while (i > 0)
	{
	  my_putchar((n / i) % 10 + 48);
	  i = i / 10;
	}
    }
}
