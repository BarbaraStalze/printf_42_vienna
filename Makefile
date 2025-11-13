# Makefile for ft_print

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJFILES = $(SOURCES:.c=.o)
SOURCES = ft_printf.c\
			ft_


all : $(NAME)

$(NAME) : $(OBJFILES)
	ar rcs $(@) $(?)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean:clean
	rm -f $(NAME)

re:fclean all
