/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:33:05 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/11 15:34:22 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_charset(char	*charset, char c)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_word_size(char *str, char *charset)
{
	int i;
	int word_size;

	i = 0;
	while (str[i] && !ft_charset(charset, str[i]))
		i++;
	return (i);
}

int		nb_mot(char *str, char *charset)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{	
		while (ft_charset(charset, str[i]))
			i++;
		if (str[i])
			nb++;
		while (str[i] && !ft_charset(charset, str[i]))
			i++;
	}
	return (nb);
}

char	**ft_split(char *str, char *charset)
{
	int    i;
	int    j;
	int    k;
	char  **tab;

	i = 0;
	k = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_mot(str, charset) + 1))))
		return (0);
	while (str[i])
	{
		while (ft_charset(charset, str[i]))
			i++;
		if (str[i])
		{
			if (!(tab[k] = (char*)malloc(sizeof(char) * (ft_word_size(str + i, charset)))))
				return (0);
			j = 0;
			while (str[i] && !ft_charset(charset, str[i]))
				tab[k][j++] = str[i++];
			tab[k++][j] = '\0';
		}
	}
	tab[k] = NULL;
	return (tab);
}
