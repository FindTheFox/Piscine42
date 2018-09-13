/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:48:52 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/13 21:31:17 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define SEP(c) (c == '\n' || c == '\t' || c == ' ' ? 1 : 0)
#define DIFSEP(c) (c != '\n' && c != '\t' && c != ' ' ? 1 : 0)

int		word_size(char *str)
{
	int i;

	i = 0;
	while (str[i] && DIFSEP(str[i]))
		i++;
	return (i);
}

int		nb_mot(char *str)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (SEP(str[i]))
			i++;
		if (str[i])
			nb++;
		while (str[i] && !SEP(str[i]))
			i++;
	}
	return (nb);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_mot(str) + 1))))
		return (0);
	while (str[i])
	{
		while (SEP(str[i]))
			i++;
		if (str[i])
		{
			if (!(tab[k] = (char*)malloc(sizeof(char) * (word_size(str + i)))))
				return (0);
			j = 0;
			while (str[i] && DIFSEP(str[i]))
				tab[k][j++] = str[i++];
			tab[k++][j] = '\0';
		}
	}
	tab[k] = NULL;
	return (tab);
}
