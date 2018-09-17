/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 22:45:53 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/16 22:45:57 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_add(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int		ft_sub(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int		ft_mul(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int		ft_div(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int		ft_mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}
