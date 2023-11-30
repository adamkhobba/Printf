# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhobba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 15:17:55 by akhobba           #+#    #+#              #
#    Updated: 2023/11/28 15:18:02 by akhobba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CFLAGS = -Wall -Wextra -Werror 

SRC = ft_putnbr_base.c \
			ft_putchar.c\
			ft_putstr.c \
			ft_strlen.c
OBJ = $(SRC:.c=.o) 

all : $(NAME)

$(NAME) : $(OBJ) 

.c.o : 
	cc $(CFLAGS) -c $<
	ar -rcs $(NAME) $@
	
clean : 
	rm -f $(OBJ) $(BOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean clean
