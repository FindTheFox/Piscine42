/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:55:23 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/04 17:06:26 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTABLE(c) (c >= 32 && c <= 126)

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (PRINTABLE(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
