/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:09:22 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/18 19:46:10 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list->data = data;
	list->next = NULL;
	return (list);
}
