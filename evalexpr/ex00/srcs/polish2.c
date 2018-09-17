/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polish2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 22:46:31 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/16 22:46:32 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		is_operator(char *elem)
{
	return (ft_strlen(elem) == 1
			&& (*elem == '+' || *elem == '-' || *elem == '*' || *elem == '/'
				|| *elem == '%' || *elem == '(' || *elem == ')'));
}

int		f_prio(char *elem)
{
	if (elem == NULL)
		return (-1);
	else if (ft_strcmp(elem, "*") == 0 || ft_strcmp(elem, "/") == 0
			|| ft_strcmp(elem, "%") == 0)
		return (2);
	else if (ft_strcmp(elem, "+") == 0 || ft_strcmp(elem, "-") == 0)
		return (1);
	else if (ft_strcmp(elem, "(") == 0)
		return (0);
	return (-1);
}
