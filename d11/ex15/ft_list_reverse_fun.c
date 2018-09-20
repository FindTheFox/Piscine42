/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:40:01 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/20 18:09:34 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (NULL);
	else if (nbr == 0)
		return (begin_list);
	else if (begin_list->next)
		return (ft_list_at(begin_list->next, (nbr - 1)));
	else
		return (NULL);
}

int			ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}

void		ft_swap_data(void **a, void **b)
{
	void *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	int i;
	int size;

	size = ft_list_size(begin_list);
	i = 0;
	while (i < size / 2)
	{
		ft_swap_data(&((ft_list_at(begin_list, i))->data),
				&(ft_list_at(begin_list, size - i - 1)->data));
		i++;
	}
}
