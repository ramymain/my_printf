/*
** options.c for my_printf in /home/ramy/my_printf
** 
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
** 
** Started on  Wed Apr  6 09:14:23 2016 FERJANI Ramy
** Last update Wed Apr  6 15:15:26 2016 FERJANI Ramy
*/

#include <stdarg.h>
#include "my_printf.h"

void	option_s(va_list ap)
{
  my_putstr(va_arg(ap, char *));
}

void	option_c(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void	option_i(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void	option_d(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void		option_o(va_list ap)
{
  unsigned int	dec;
  unsigned int	oct;
  int		i;
  unsigned int	mod;

  i = 1;
  oct = 0;
  dec = va_arg(ap, unsigned int);
  while (dec > 0)
    {
      mod = dec%8;
      dec/=8;
      oct = oct + (i * mod);
      i*=10;
    }
  my_put_nbr(oct);
}
