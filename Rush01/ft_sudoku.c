/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:51:35 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/09 21:50:58 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str++)
		ft_putchar(*(str - 1));
}

int		all_check(int **grid, int pos, int nbr)
{
	return (orthogonal_check(grid, pos, nbr) && square_check(grid, pos, nbr));
}

int		orthogonal_check(int **grid, int pos, int nbr)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		if (grid[i][pos % 9] == nbr)
			return (0);
		i++;
	}
	j = 0;
	while (j < 9)
	{
		if (grid[pos / 9][j] == nbr)
			return (0);
		j++;
	}
	return (1);
}

int		square_check(int **grid, int pos, int nbr)
{
	int		x;
	int		y;
	int		i;
	int		j;

	x = pos / 9;
	y = pos % 9;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (grid[(x - (x % 3) + i)][(y - (y % 3) + j)] == nbr)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
