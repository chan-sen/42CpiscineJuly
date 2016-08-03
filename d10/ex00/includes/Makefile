# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chansen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 17:40:56 by chansen           #+#    #+#              #
#    Updated: 2016/07/25 17:42:25 by chansen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPFLAGS = -c -Wall -Wextra -Werror
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c
HEADER = includes
OBJECT = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(COMPFLAGS) $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
