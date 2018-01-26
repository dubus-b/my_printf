##
## Makefile for makefileprintf in /home/dubus_b/rendu/Unix/PSU_2015_my_printf
## 
## Made by Benjamin Dubus
## Login   <dubus_b@epitech.net>
## 
## Started on  Mon Nov 16 16:19:44 2015 Benjamin Dubus
## Last update Mon Nov 16 22:55:06 2015 Benjamin Dubus
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Werror -Wextra -ansi -I include/

NAME	= libmy.a

SDIR	= src/

SRCS	= $(SDIR)my_printf.c		\
	  $(SDIR)print.c		\
	  $(SDIR)print2.c		\
	  $(SDIR)my_putchar.c		\
	  $(SDIR)my_strlen.c		\
	  $(SDIR)my_putstr.c		\
	  $(SDIR)my_put_nbr.c		\
	  $(SDIR)my_putnbr_uint.c 	\
	  $(SDIR)my_putnbr_base.c	

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
