# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 17:44:33 by snunez-p          #+#    #+#              #
#    Updated: 2024/11/07 18:08:02 by snunez-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =ft_printf.c\
       ft_putchar.c \
       ft_putstr.c \
       ft_putnbr.c\
       ft_putsnbr.c\
       ft_putptr.c\
       ft_puthex.c
       

OBJS = $(patsubst %.c, %.o, $(SRCS))

CC = cc
CFLAGS = -Wall -Wextra -Werror -g


all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
