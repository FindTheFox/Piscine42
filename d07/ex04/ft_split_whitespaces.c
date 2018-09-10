/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:48:52 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/09 18:29:57 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define SEP(c) (c == '\n' || c == '\t' || c == ' ' ? 1 : 0)

int		ft_word_size(char *str)
{
	int i;
	int word_size;

	i = 0;
	word_size = 0;
	while (str[i])
	{
		while (SEP(str[i]) && str[i])
			i++;
		while (!(SEP(str[i])) && str[i])
		{
			word_size++;
			i++;		
		}
	}
	return (word_size);
}

int		nb_mot(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{	
		while (!(SEP(str[i])) && str[i])
			i++;
		while (SEP(str[i]))
			i++;
		nb++;
	}
	return (nb);
}

char 	**ft_split_whitespaces(char *str)
{
	char	**dest;
	char	*mot;
	int 	k;
	int	word_entered;
	int	word_count;

	k = 0;
	word_entered = 0;
	word_count = nb_mot(str);
	printf("%d\n", word_count);
	if (!(dest = (char**)malloc(sizeof(char*) * (word_count + 1))))
		return(0);
	while (word_entered < word_count)
	{	
		if(!(mot = (char *)malloc(sizeof(char) * (ft_word_size(str) + 1))))
			return (0);
		while (SEP(str[0]) && str[0] != '\0')
			str++;	
		printf("str = %s\n", str);	
		while (!(SEP(str[0])) && str[0] != '\0')
			mot[k++] = *str++;
		mot[k] = '\0';
		dest[word_entered++] = mot;
		k = 0;
	}
	dest[word_entered] = '\0';
	printf("%s\n", *dest);
	return (dest);
}	

int		main(int ac, char **av)
{
	ac = 0;
	ft_split_whitespaces(av[1]);
	return(0);
}
