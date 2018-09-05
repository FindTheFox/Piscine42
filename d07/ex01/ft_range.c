/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 21:13:54 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/05 21:29:08 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	char *dest;
	int taille;
	int i;
	int j;

	j = -1;
	i = min - 1;
	taille = max - min;
	if(!(dest = malloc(sizeof(taille))))
		return (0);
	while (i++ < max)
		dest[j++] = i;
	dest[max] = '\0';
}

int		main(void)
{
	int *str = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_range(str);
	return (0);
}
