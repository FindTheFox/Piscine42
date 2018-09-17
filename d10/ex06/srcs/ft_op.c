/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:31:33 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/17 14:40:59 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void		op_plus(int nb1, int nb2)
{
	ft_putnbr(nb1 + nb2);
}

void		op_moins(int nb1, int nb2)
{
	ft_putnbr(nb1 - nb2);
}

void		op_fois(int nb1, int nb2)
{
	ft_putnbr(nb1 * nb2);
}

void 	op_mod(int nb1, int nb2)
{
	if (nb2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(nb1 % nb2);
}

void		op_div(int nb1, int nb2)
{
	if (nb2 == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(nb1 / nb2);
}
