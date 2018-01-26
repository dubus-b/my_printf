/*
** my.h for my in /home/dubus_b/rendu/Unix/PSU_2015_my_printf/src
** 
** Made by Benjamin Dubus
** Login   <dubus_b@epitech.net>
** 
** Started on  Mon Nov 16 17:22:39 2015 Benjamin Dubus
** Last update Mon Nov 16 23:08:02 2015 Benjamin Dubus
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int nbr);
int	my_strlen(char *str);
int	my_printf(const char *format, ...);
void	my_put_nbr_uint(unsigned int nbr);
int	my_putnbr_base(unsigned int nbr, char *base);

#endif /* !MY_H_ */
