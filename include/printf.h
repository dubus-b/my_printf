/*
** printf.h for print.h in /home/dubus_b/printf
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Sun Nov 15 13:44:04 2015 Benjamin Dubus
** Last update Mon Nov 16 23:29:09 2015 Benjamin Dubus
*/

#ifndef PRINTF_H_
# define PRINTF_H_

# include <stdarg.h>

typedef struct  s_flags
{
  char          key;
  int           (*ptr)(va_list);
}               t_flags;

int     printc(va_list ap);
int     printd(va_list ap);
int     prints(va_list ap);
int	printu(va_list ap);
int	printx(va_list ap);
int	printX(va_list ap);
int	printo(va_list ap);
int	printb(va_list ap);

#endif /*!PRINTF_H_ */
