/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:43:44 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/09 16:29:23 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_free(int nb, int **grid, int i)
{
	int i;

	while (j < 9)
	{
		if (grille[i][j] == pos)
			return(0);
		j++;
	}
	return (1);
}

int		ft_backtracking(int **grid, int pos)
{
	int nbr;
	if (pos == 81)
	{
		display_solved(grid);
		return (1);
	}

	nbr = 1;
	if (grid[pos / 9][pos % 9] != 0)
	   return (ft_backtracking(grid, pos + 1));
	while (nbr <= 9)
	{
		if (check_free(grid, pos, nbr))
		{	
			grid[pos / 9][pos % 9]
			

		}
}
int		**input_cpy_of_grid(char **argv)
{
	int i;
	int j;
	int **tab;

	i = 0;
	tab = (int**)malloc(sizeof(int*) * 9);
	while (i < 9)
	{
		tab[i] = (int*)malloc(sizeof(int) * 9);
		j = 0;
		while (j < 9)
		{
			if (argv[i + j][j] == '.')
				teb[i][j] = 0;
			else
				tab[i][j] = argv[i + 1][j] - '0';
			j++;
		}
		i++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int		**grid;
	int		i;

	gird - input_cpy_of_grid(argv);
	if ((argc -1) != 9)
		ft_putstr("Error");
	else
		ft_backtracking(grid, 0);
	return (0);
}
