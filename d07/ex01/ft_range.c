/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 21:13:54 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/06 14:02:37 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int taille;
	int i;
	int j;

	j = 0;
	i = min - 1;
	taille = max - min;
	if (min >= max)
		return (0);
	if(!(dest = malloc(sizeof(taille))))
		return (0);
	while (i++ < (max - 1))
	{	
		dest[j] = i;
		j++;
	}
	return (dest);
}
