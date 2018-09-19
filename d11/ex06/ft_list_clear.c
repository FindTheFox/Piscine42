/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:40:59 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/19 12:50:22 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list)
	{
		ft_list_clear(&(*begin_list)->next)
		free(&(*begin_list));
		(*begin_list) = NULL;
	}
}
