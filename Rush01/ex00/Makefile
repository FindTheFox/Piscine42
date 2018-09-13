# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saneveu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 22:38:07 by saneveu           #+#    #+#              #
#    Updated: 2018/09/13 17:28:52 by saneveu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-1

FLAGS = -Wall -Werror -Wextra

OPTS = -o $(NAME)

SRC = ft_sudoku.c sudoku.c

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRC) $(OPTS)

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
