# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarlasc <amarlasc@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/25 17:52:44 by amarlasc          #+#    #+#              #
#    Updated: 2026/05/25 19:05:25 by amarlasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name
NAME = libftprintf.a

# Compilatos and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

# Files

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_base.c \
		ft_putunsigned.c ft_puthex.c ft_putptr.c

OBJS = $(SRCS:.c=.o)

# Rules

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re