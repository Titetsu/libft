# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkoelpin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/04 13:25:32 by wkoelpin          #+#    #+#              #
#    Updated: 2018/12/05 14:09:47 by wkoelpin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_isalpha.c srcs/ft_memccpy.c \
	  srcs/ft_memcpy.c srcs/ft_memset.c srcs/ft_putchar.c srcs/ft_putnbr.c \
	  srcs/ft_putstr.c srcs/ft_strcat.c srcs/ft_strchr.c srcs/ft_strcmp.c \
	  srcs/ft_strcpy.c srcs/ft_strdup.c srcs/ft_strlen.c srcs/ft_strncat.c \
	  srcs/ft_strncmp.c srcs/ft_strncpy.c srcs/ft_strnstr.c srcs/ft_strrchr.c \
	  srcs/ft_strstr.c

OBJS = *.o

HEADERS = includes/

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADERS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
