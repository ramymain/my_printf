/*
** options2.c for my_printf in /home/ramy/my_printf
** 
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
** 
** Started on  Wed Apr  6 14:11:27 2016 FERJANI Ramy
** Last update Fri Apr  8 10:55:59 2016 FERJANI Ramy
*/

#include <stdarg.h>
#include "my_printf.h"

void		option_u(va_list ap)
{
  int		i;
  unsigned int	n;

  i = 1;
  n = va_arg(ap, unsigned int);
  while ((n / i) >= 10)
    i*= 10;
  while (i > 0)
    {
      my_putchar((n / i) % 10 + 48);
      i /= 10;
    }
}

void	option_p(va_list ap)
{
  my_putchar('%');
  (void)ap;
}

void	display_hexa(int n, int ascii)
{
  int	i;
  char	buffer[2024];
  int	mod;

  i = 0;
  while (n > 15)
    {
      mod = n % 16;
      n = n / 16;
      if (mod >= 0 && mod <= 9)
	buffer[i++] = mod + 48;
      else if (mod >= 10 && mod <= 15)
	buffer[i++] = mod + ascii;
    }
  if (n >= 0 && n <= 15)
    {
      if (n >= 0 && n <= 9)
	buffer[i] = n + 48;
      else
	buffer[i] = n + ascii;
    }
  while (i >= 0)
    my_putchar(buffer[i--]);
}

void	option_x(va_list ap)
{
  int	n;

  n = va_arg(ap, int);
  if (n >= 0 && n <= 15)
    if (n >= 0 && n <= 9)
      my_putchar(n + 48);
    else
      my_putchar(n + 87);
  else
    display_hexa(n, 87);
}

void	option_X(va_list ap)
{
  int	n;

  n = va_arg(ap, int);
  if (n >= 0 && n <= 15)
    if (n >= 0 && n <= 9)
      my_putchar(n + 48);
    else
      my_putchar(n + 55);
  else
    display_hexa(n, 55);
}
