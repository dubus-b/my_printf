/*
** print2.c for print2 in /home/dubus_b/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 22:45:45 2015 Benjamin Dubus
** Last update Tue Nov 17 14:01:57 2015 Benjamin Dubus
*/

#include "my.h"
#include "printf.h"

int	printX(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
  return (0);
}

int	printo(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "01234567");
  return (0);
}

int	printb(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "01");
  return (0);
}

