/*
** my_putnbr_unint.c for unsigned in /home/dubus_b/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 22:26:17 2015 Benjamin Dubus
** Last update Mon Nov 16 22:26:27 2015 Benjamin Dubus
*/

#include "my.h"

void    my_put_nbr_uint(unsigned int nbr)
{
  if (nbr >= 10)
    {
      my_put_nbr_uint(nbr / 10);
      my_putchar(nbr % 10 + '0');
    }
  else
    my_putchar(nbr + '0');
}
