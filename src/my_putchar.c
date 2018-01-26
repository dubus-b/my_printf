/*
** my_putchar.c for putchar in /home/dubus_b/rendu/Unix/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 17:12:29 2015 Benjamin Dubus
** Last update Wed Jan  6 15:24:29 2016 Benjamin Dubus
*/

#include "my.h"

void	my_putchar(char letter)
{
  write(1, &letter, 1);
}
