/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:13:45 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/05 00:04:34 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int half;

	i = 2;
	half = nb / 2;
	if ((nb % 2 == 0 && nb != 2) || (nb % 5 == 0 && nb != 5))
		return (0);
	if (nb == 4 || nb == 6 || nb == 1 || nb <= 0)
		return (0);
	while (i < half)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
