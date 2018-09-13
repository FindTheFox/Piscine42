/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 21:07:04 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/13 21:42:27 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	int i;
	int j;

	i = 0;
	while (tab[i][j])
	{
		j = 0;
		while (tab[i][j] && tab[i][j] == 0)
			j++;
		if (tab[i][j] == 1)
			return (1);
		i++;
	}
	return (0);
}
