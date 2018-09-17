/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:59:09 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/17 22:32:02 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;
	char	*tmp;

	size = 0;
	while (tab[size])
		size++;
	i = size;
	while (i--)
	{
		j = 0;
		while (j < size - 1)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			++j;
		}
	}
}
