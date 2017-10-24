##
## Makefile for my_printf in /home/ramy/my_printf
##
## Made by FERJANI Ramy
## Login   <ferjan_r@etna-alternance.net>
##
## Started on  Thu Apr  7 11:12:36 2016 FERJANI Ramy
## Last update Fri Apr  8 15:54:26 2016 FERJANI Ramy
##

CC	=	gcc
SRC	=	my_printf.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_put_nbr.c	\
		options.c	\
		options2.c
AR	=	ar r
OBJ	=	$(SRC:.c=.o)
RL	=	ranlib
CFLAGS	=	-W -Wall -Werror -Wextra -fPIC
RM	=	rm -f
SNAME	=	libmy_printf_`uname -m`-`uname -s`.a
DNAME	=	libmy_printf_`uname -m`-`uname -s`.so
DFLAG	=	-shared

make	:	all

my_printf_static :	$(OBJ)
	$(AR) $(SNAME) $(OBJ)
	$(RL) $(SNAME)

my_printf_dynamic :	$(OBJ)
	$(CC) $(CFLAGS) $(DFLAG) -o $(DNAME) $(OBJ)

all	:	my_printf_static my_printf_dynamic

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		rm -f $(SNAME) $(DNAME)

re	:	fclean all

.PHONY	:	my_printf_static my_printf_dynamic clean fclean re