/*
** my_putnbr_base.c for base in /home/dubus_b/Downloads/lib/lib/my
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Fri Nov  6 17:47:10 2015 Benjamin Dubus
** Last update Mon Nov 16 22:23:23 2015 Benjamin Dubus
*/

#include "my.h"

int             my_putnbr_base(unsigned int nbr, char *base)
{
  unsigned int  base_len;

  base_len = 0;
  while (base[base_len] != '\0')
    base_len = base_len + 1;
  if (nbr >= base_len)
    my_putnbr_base(nbr / base_len, base);
  my_putchar(base[nbr % base_len]);
  return (nbr);
}
