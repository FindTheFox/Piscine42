/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:06:32 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/09 22:51:26 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void	output_solved(int **grid)
{
	int		pos;

	pos = 1;
	while (pos <= 81)
	{
		ft_putchar(grid[(pos - 1) / 9][(pos - 1) % 9] + 48);
		if (pos % 9 == 0 && pos != 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		pos++;
	}
	free(grid);
	return ;
}

int		ft_sudoku_backtracking(int **grid, int pos)
{
	int nbr;

	if (pos == 81)
	{
		output_solved(grid);
		return (1);
	}
	nbr = 1;
	if (grid[pos / 9][pos % 9] != 0)
	{
		return (ft_sudoku_backtracking(grid, pos + 1));
	}
	while (nbr <= 9)
	{
		if (all_check(grid, pos, nbr))
		{
			grid[pos / 9][pos % 9] = nbr;
			if (ft_sudoku_backtracking(grid, pos + 1))
				return (1);
			grid[pos / 9][pos % 9] = 0;
		}
		nbr++;
	}
	return (0);
}

int		**input_grid_cpy(char **argv)
{
	int i;
	int j;
	int **tab;

	i = 0;
	if (!(tab = (int**)malloc(sizeof(int*) * 9)))
		return (0);
	while (i < 9)
	{
		if (!(tab[i] = (int*)malloc(sizeof(int) * 9)))
			return (0);
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				tab[i][j] = 0;
			else
				tab[i][j] = argv[i + 1][j] - '0';
			j++;
		}
		i++;
	}
	return (tab);
}

int		user_input_check(char **argv, int count, int check_char)
{
	int	i;
	int	j;

	check_char = 0;
	i = 1;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!NUMBER(argv[i][j]) && argv[i][j] != '.')
				return (0);
			if (NUMBER(argv[i][j]))
				count++;
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	if (count < 17)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int	**grid;
	int	result;

	result = -1;
	if ((argc - 1) != 9)
		ft_putstr("Error \n");
	else
	{
		if (user_input_check(argv, 0, 0) == 1)
		{
			grid = input_grid_cpy(argv);
			result = ft_sudoku_backtracking(grid, 0);
		}
		else
			ft_putstr("Error \n");
	}
	if (result == 0)
		ft_putstr("Error \n");
	return (0);
}
