/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 20:42:40 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/13 23:24:34 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *tab, int length, void (f*)(int))
{
	int i;

	while (i < length)
	{
	(*f)(tab[i]);
		i++;
	}
}
