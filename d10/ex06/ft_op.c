/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:31:33 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/15 14:35:24 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_op.h"

int		op_plus(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int		op_moins(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int		op_fois(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int 	op_mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}

int		op_div(int nb1, int nb2)
{
	return (nb1 / nb2);
}
