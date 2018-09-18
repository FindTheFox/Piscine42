/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:37:55 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/18 17:42:48 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(int i, int swap, int j, char **tab)
{
	tab[swap] = tab[j];
	tab[j] = tab[i];
	tab[i] = tab[swap];
	tab[swap] = NULL;
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int j;
	int swap;

	i = 0;
	while (tab[i])
		i++;
	swap = i;
	i--;
	while (i > 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (ft_strcmp(tab[j], tab[i]) > 0)
				ft_swap(i, swap, j, tab);
			j--;
		}
		i--;
	}
}
