/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:36:52 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/09 22:30:21 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define NUMBER(c) ((c >= '1' && c <= '9') ? 1 : 0)

void	output_solved(int **grid);
int		ft_sudoku_backtracking(int **grid, int pos);
int		**input_grid_cpy(char **argv);
int		user_input_check(char **argv, int count, int check_char);
int		main(int argc, char **argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		all_check(int **grid, int pos, int nbr);
int		orthogonal_check(int **grid, int pos, int nbr);
int		square_check(int **grid, int pos, int nbr);

#endif
