/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 20:57:08 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/13 23:25:09 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (f*)(int))
{
	int i;
	int *dest;

	if(!(dest = (int *)malloc(sizeof(int) * length)))
	   return (0);	
	i = 0;
	while (i < length)
	{
		dest[i] = (*f)(tab[i]);
		i++;
	}
}
