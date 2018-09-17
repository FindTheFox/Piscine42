/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 21:45:18 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/17 23:41:16 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			count1++;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			count2++;
		i++;
	}
	if (count1 != 0 && count2 != 0)
		return (0);
	return (1);
}
