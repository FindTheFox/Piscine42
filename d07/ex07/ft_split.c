/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:33:05 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/11 18:31:47 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_chars(char *chars, char c)
{
	int i;

	i = 0;
	while (chars[i])
	{
		if (chars[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		w_l(char *str, char *chars)
{
	int i;

	i = 0;
	while (str[i] && !ft_chars(chars, str[i]))
		i++;
	return (i);
}

int		nb_mot(char *str, char *chars)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (ft_chars(chars, str[i]))
			i++;
		if (str[i])
			nb++;
		while (str[i] && !ft_chars(chars, str[i]))
			i++;
	}
	return (nb);
}

char	**ft_split(char *str, char *chars)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_mot(str, chars) + 1))))
		return (0);
	while (str[i])
	{
		j = 0;
		while (ft_chars(chars, str[i]))
			i++;
		if (str[i])
		{
			if (!(tab[k] = (char*)malloc(sizeof(char) * (w_l(str + i, chars)))))
				return (0);
			while (str[i] && !ft_chars(chars, str[i]))
				tab[k][j++] = str[i++];
			tab[k++][j] = '\0';
		}
	}
	tab[k] = NULL;
	return (tab);
}
