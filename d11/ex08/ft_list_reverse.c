/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:07:35 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/19 14:28:19 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//oublie pas les libs fdp
#include <stdlib.h>
#include "ft_list.h"

void  ft_list_reverse(t_list **begin_list)
{
	t_list *tmp1;
	t_list *tmp2;
	t_list *tmp3;

	if (!(*begin_list) || !(*begin_list)->next)
		return ;
	tmp1 = (*begin_list);
	tmp2 = tmp1->next;
	tmp3 = tmp2->next;
	tmp1->next = NULL;
	tmp2->next = tmp1;
	while (tmp3)
	{
		tmp1 = tmp2;
		tmp2 = tmp3;
		tmp3 = tmp3->next;
		tmp2->next = tmp1;
	}
	(*begin_list) = tmp2;
}
