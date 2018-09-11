/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 21:13:54 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/11 18:17:15 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int j;

	j = 0;
	if (min >= max)
		return (0);
	if (!(dest = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		dest[j] = min;
		j++;
		min++;
	}
	return (dest);
}
