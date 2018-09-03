/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 23:00:36 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/01 11:42:18 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb > 12) || (nb < 0))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
