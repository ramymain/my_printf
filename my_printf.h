/*
** my_printf.h for my_printf in /home/ramy/my_printf
**
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Tue Apr  5 15:31:33 2016 FERJANI Ramy
** Last update Fri Apr  8 13:53:49 2016 FERJANI Ramy
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

#include <stdarg.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int n);
void	parse_opt(char c, va_list ap);
void	parse_ptr(int i, va_list ap);
void	option_s(va_list ap);
void	option_c(va_list ap);
void	option_i(va_list ap);
void	option_d(va_list ap);
void	option_o(va_list ap);
void	option_u(va_list ap);
void	option_p(va_list ap);
void	option_x(va_list ap);
void	option_X(va_list ap);

#endif
