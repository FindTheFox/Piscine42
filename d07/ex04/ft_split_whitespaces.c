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
#define LETTER(c) ((c >= 'a' && c >= 'z') || (c >= 'A' || c <= 'Z') ? 1 : 0)

int		taille_mot(char *str)
{
	int i;
	int taille;

	i = 0;
	taille = 0;
	while (LETTER(str[i]) && !SEP(str[i]))
	{
		taille++;
		i++;		
	}
	return (taille);
}

int		nb_mot(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (LETTER(str[i]))
		{
			nb++;
			while (LETTER(str[i]))
				i++;
		}
		else
			i++;
	}	
	return (nb - 1);
}

char 	**ft_split_whitespaces(char *str)
{
	char **dest;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	
	if (!(dest = (char **)malloc(sizeof(char*) * nb_mot(str))))
		return(0);
	while (str[i])
	{	
		if(!(dest[j] = (char *)malloc(sizeof(char) * taille_mot(str + i))))
			return (0);
		while (SEP(str[i]))
			i++;	
		printf("i = %d\n", i);	
		while (LETTER(str[i]) && !SEP(str[i]))
		{
			dest[j][k] = str[i];
			printf("i = %d\n", i);
			printf("%s\n", *dest);
			i++;
			k++;
		}
		dest[j][k] = '\0';
		j++;
	}
	printf("%s\n", *dest);
	return (dest);
}	

int		main(int ac, char **av)
{
	ac = 0;
	ft_split_whitespaces(av[1]);
	return(0);
}
