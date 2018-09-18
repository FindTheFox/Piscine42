/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 18:14:31 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/18 21:46:25 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			ft_list_push_back(&((*begin_list)->next), data);
		else
			(*begin_list)->next = ft_creat_elem(data);
	}
	(*begin_list) = ft_create_elem(data);
}	
