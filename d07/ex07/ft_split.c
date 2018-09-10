/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:48:52 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/10 23:21:58 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define SEP(c) (c == '\n' || c == '\t' || c == ' ' ? 1 : 0)
#define DIFSEP(c) (c != '\n' && c != '\t' && c != ' ' ? 1 : 0)

void	ft_charset(char	*charset, char c)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		return (0);
	}
}

int		ft_word_size(char *str, char *charset)
{
	int i;
	int word_size;

	i = 0;
	while (str[i] && ft_charset(charset, str[i]))
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
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_mot(str) + 1))))
		return (0);
	while (str[i])
	{
		while (SEP(str[i]))
			i++;
		if (str[i])
		{
			if (!(tab[k] = (char*)malloc(sizeof(char) * (ft_word_size(str + i)))))
				return (0);
			j = 0;
			while (str[i] && ft_charset(charset, str[i]))
				tab[k][j++] = str[i++];
			tab[k++][j] = '\0';
		}
	}
	tab[k] = NULL;
	return (tab);
}

int		main(int ac, char **av)
{
	ac = 0;
	ft_print_words_tables(ft_split(av[1]));
	return(0);
}
