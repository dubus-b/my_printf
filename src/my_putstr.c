/*
** my_putstr.c for putstr in /home/dubus_b/rendu/Unix/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 17:14:51 2015 Benjamin Dubus
** Last update Wed Jan  6 15:24:48 2016 Benjamin Dubus
*/

#include "my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
