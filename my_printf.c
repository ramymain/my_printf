/*
** my_printf.c for my_printf in /home/ramy/my_printf
**
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Mon Apr  4 15:07:35 2016 FERJANI Ramy
** Last update Fri Apr  8 15:11:12 2016 FERJANI Ramy
*/

#include <stdarg.h>
#include "my_printf.h"

void	parse_ptr(int i, va_list ap)
{
  void	(*ptr[9])(va_list ap);

  ptr[0] = option_s;
  ptr[1] = option_c;
  ptr[2] = option_i;
  ptr[3] = option_d;
  ptr[4] = option_o;
  ptr[5] = option_u;
  ptr[6] = option_p;
  ptr[7] = option_x;
  ptr[8] = option_X;
  (*ptr[i])(ap);
}

void	parse_opt(char c, va_list ap)
{
  char	opt[9];
  int	j;

  opt[0] = 's';
  opt[1] = 'c';
  opt[2] = 'i';
  opt[3] = 'd';
  opt[4] = 'o';
  opt[5] = 'u';
  opt[6] = '%';
  opt[7] = 'x';
  opt[8] = 'X';
  j = 0;
  while (opt[j])
    {
      if (opt[j] == c)
	parse_ptr(j, ap);
      ++j;
    }
}

int		my_printf(char *str, ...)
{
  int		i;
  va_list	ap;

  i = 0;
  va_start(ap, str);
  while (str[i])
    if (str[i] == '%')
      {
	parse_opt(str[i+1], ap);
	i = i + 2;
      }
    else
      my_putchar(str[i++]);
  va_end(ap);
  return (0);
}
