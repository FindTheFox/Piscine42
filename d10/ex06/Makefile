# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saneveu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 14:38:22 by saneveu           #+#    #+#              #
#    Updated: 2018/09/18 17:40:32 by saneveu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FLAG = -c -Wall -Werror -Wextra

HDR = -I includes/

SRC = srcs/do_op.c srcs/ft_display.c srcs/ft_op.c

OBJ = ft_display.o ft_op.o do_op.o

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(HDR) $(SRC)
	@gcc $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	
fclean:	
	@/bin/rm -rf $(NAME) $(OBJ)

re: fclean all
