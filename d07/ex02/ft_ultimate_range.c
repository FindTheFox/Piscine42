/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:03:32 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/06 14:07:46 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_ultimate_range(int **range, int min, int max)
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
	if (!(dest = malloc(sizeof(taille))))
		return (0);
	while (i++ < (max - 1))
	{
		dest[j] = i;
		j++;
	}
	*range = dest;
	return (range);
}	
