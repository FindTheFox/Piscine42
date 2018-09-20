/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 12:21:20 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/19 12:37:30 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_create_elem(data);
	if (*begin_list)
		list->next = (*begin_list);
	else
		(*begin_list) = ft_create_elem(data);
	(*begin_list) = list;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int i;
	t_list	*list;

	list = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
