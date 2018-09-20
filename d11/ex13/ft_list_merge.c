/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 21:50:30 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/19 21:59:36 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!(*begin_list1))
		*begin_list1 = begin_list2; 
	else if (!(*begin_list1)->next)
		(*begin_list1)->next = begin_list2;
	else
		ft_list_merge(&((*begin_list1)->next), begin_list2);
}
