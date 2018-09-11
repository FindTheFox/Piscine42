/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:03:32 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/11 18:13:59 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *dest;
	int j;

	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(dest = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		dest[j] = min;
		j++;
		min++;
	}
	*range = dest;
	return (j);
}
