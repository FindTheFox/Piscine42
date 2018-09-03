# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saneveu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/01 22:58:44 by saneveu           #+#    #+#              #
#    Updated: 2018/09/02 21:03:47 by saneveu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c;
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o;
ranlib libft.a;
rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o;
