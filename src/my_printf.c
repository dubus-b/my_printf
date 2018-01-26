/*
** my_printf.c for my_printf in /home/dubus_b/printf
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Sun Nov 15 14:39:36 2015 Benjamin Dubus
** Last update Thu Jun  9 18:54:12 2016 Benjamin Dubus
*/

#include "my.h"
#include "printf.h"

t_flags		g_flags_tab[] =
  {
     {'c', &printc},
     {'s', &prints},
     {'i', &printd},
     {'d', &printd},
     {'u', &printu},
     {'x', &printx},
     {'X', &printX},
     {'o', &printo},
     {'b', &printb}
  };

void		choose_flag(t_flags *tab, va_list ap, char flag)
{
  int		i;
  
  i = 0;
  while (i < 9)
    {
      if (flag == tab[i].key)
	tab[i].ptr(ap);
      i = i + 1;
    }
}

int		my_printf(const char *format, ...)
{
  int		i;
  va_list	ap;

  if (format == NULL)
    return (-1);
  va_start(ap, format);
  i = 0;
  while (format[i] != '\0')
    {
      if (format[i] == '%')
        {
          choose_flag(g_flags_tab, ap, format[i + 1]);
	  i = i + 1;
	}
      else
	my_putchar(format[i]);
      i = i + 1;
    }
  return (0);
}
