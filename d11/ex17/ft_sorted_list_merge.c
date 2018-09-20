/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:39:46 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/20 18:12:03 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	my_ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!(*begin_list1))
		*begin_list1 = begin_list2;
	else if (!(*begin_list1)->next)
		(*begin_list1)->next = begin_list2;
	else
		my_ft_list_merge(&((*begin_list1)->next), begin_list2);
}

void	my_ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list		*tmp;
	t_list		*tmp1;
	t_list		*tmp2;
	void		*min;

	tmp = *begin_list;
	while (tmp)
	{
		tmp2 = tmp;
		min = tmp->data;
		tmp1 = tmp->next;
		while (tmp1)
		{
			if ((*cmp)(min, tmp1->data) > 0)
			{
				tmp2 = tmp1;
				min = tmp2->data;
			}
			tmp1 = tmp1->next;
		}
		tmp2->data = tmp->data;
		tmp->data = min;
		tmp = tmp->next;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2
		, int (*cmp)())
{
	my_ft_list_merge(begin_list1, begin_list2);
	my_ft_list_sort(begin_list1, cmp);
}
