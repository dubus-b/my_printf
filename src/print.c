/*
** print.c for print in /home/dubus_b/printf
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 16:32:28 2015 Benjamin Dubus
** Last update Thu Jun  9 18:57:12 2016 Benjamin Dubus
*/

#include "my.h"
#include "printf.h"

int		printc(va_list ap)
{
  my_putchar(va_arg(ap, int));
  return (0);
}

int		prints(va_list ap)
{
  va_list	tmp;

  *tmp = *ap;
  if (va_arg(tmp, char *) == NULL)
    { 
      my_putstr("(null)");
      return (6);
    }
  my_putstr(va_arg(ap, char *));
  return (0);
}

int		printd(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
  return (0);
}

int             printu(va_list ap)
{
  my_put_nbr_uint(va_arg(ap, unsigned int));
  return (0);
}

int             printx(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
  return (0);
}
