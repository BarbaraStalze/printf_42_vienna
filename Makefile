# Makefile for ft_printf

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJFILES = $(SOURCES:.c=.o)
SOURCES = ft_printf.c\
			ft_c.c\
			ft_s.c\
			ft_p.c\
			ft_d_i.c\
			ft_u.c\
			ft_x_X.c

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

.PHONY: all clean fclean re
