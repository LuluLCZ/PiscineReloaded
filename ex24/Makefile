# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llacaze <llacaze@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/04 12:24:23 by llacaze           #+#    #+#              #
#    Updated: 2017/11/04 12:40:34 by llacaze          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

HEADDIR = includes

SRC =	srcs/ft_putchar.c			\
		srcs/ft_putstr.c			\
		srcs/ft_strcmp.c			\
		srcs/ft_strlen.c			\
		srcs/ft_swap.c

OBJ=$(SRC:.c=.o)

$(NAME): libft.h
	$(CC) $(CFLAGS) $(HEADDIR) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
/*
.PHONY: all clean fclean re
le .PHONY permet de palier a un probleme de doublons
en quelques sortes si jamais un des fichiers que l'on
veut compiler s'appelle de la meme maniere qu'une regle
le .PHONY est present pour eviter le probleme et les 
indépendancer.
*/