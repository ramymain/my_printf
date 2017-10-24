/*
** my_putchar.c for my_printf in /home/ramy/my_printf
**
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Tue Apr  5 15:26:52 2016 FERJANI Ramy
** Last update Fri Apr  8 13:45:51 2016 FERJANI Ramy
*/

#include <unistd.h>
#include "my_printf.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

