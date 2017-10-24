/*
** my_putstr.c for my_printf in /home/ramy/my_printf
** 
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
** 
** Started on  Tue Apr  5 15:29:25 2016 FERJANI Ramy
** Last update Tue Apr  5 15:34:18 2016 FERJANI Ramy
*/

#include "my_printf.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}
