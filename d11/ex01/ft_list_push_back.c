/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 18:14:31 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/20 17:57:53 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if (((*begin_list)->next))
			ft_list_push_back(&((*begin_list)->next), data);
		else
			((*begin_list)->next) = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}
