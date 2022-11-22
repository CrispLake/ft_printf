# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emajuri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 16:39:22 by emajuri           #+#    #+#              #
#    Updated: 2022/11/22 16:28:22 by emajuri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft.a

SRC = ft_printf.c

OSRC = $(SRC:%.c=%.o)

WWW = -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OSRC)
	ar -rcs $(NAME) $(OSRC)

clean:
	rm -f $(OSRC)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

%.o: %.c
	cc -L ./libft -l ft -I ./libft -c -o $@ $^ 

re: fclean all

test:
	cc $(WWW) testmain.c $(NAME) -g
