##
## Makefile for Makefile in /home/elbouh_j/Piscine_C_J11/lib/my
## 
## Made by jamal elbouhali
## Login   <elbouh_j@epitech.net>
## 
## Started on  Mon Oct 20 14:13:07 2014 jamal elbouhali
## Last update Sun Nov 30 16:58:06 2014 jamal elbouhali
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I.

NAME	= my_ls

SRCS	= my_ls.c \
	  my_putchar.c \
	  my_putstr.c \
	  my_put_nbr.c \
	  main.c \
	  my_error.c \
	  file.c \
	  no_opt.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
