# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhobba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 15:17:55 by akhobba           #+#    #+#              #
#    Updated: 2023/12/03 11:59:18 by akhobba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

CFLAGS = -Wall -Wextra -Werror 

SRC = ft_putnbr_base.c \
			ft_putchar.c\
			ft_putstr.c \
			ft_printf.c\
			ft_strlen.c \
			ft_count.c \
			ft_putpointer.c\
		ft_puthex.c\
		ft_puthex_p.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)  $(HEADER)

.c.o : 
	cc $(CFLAGS) -c $<
	ar -rcs $(NAME) $@
	
clean : 
	rm -f $(OBJ) $(BOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
