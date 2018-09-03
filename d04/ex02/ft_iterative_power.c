/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:56:01 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/01 11:43:15 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (nb == 1)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
