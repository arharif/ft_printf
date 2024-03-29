# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arharif <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 21:41:20 by arharif           #+#    #+#              #
#    Updated: 2021/12/16 21:41:33 by arharif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER = ./header/ft_printf.h

SRC_DIR = src

OBJ_DIR = obj

SRC = ft_printf.c \
	ft_pointer.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putnbr_unsigned.c \
	ft_putstr.c \
	ft_print_hex.c

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rc $(NAME) $(OBJ) $(HEADER)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p obj
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: clean fclean re
