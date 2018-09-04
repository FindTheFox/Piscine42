/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:30:22 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/04 16:39:28 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAJ(c) (c >= 'A' && c <= 'Z' ? 1 : 0)
#define MIN(c) (c >= 'a' && c <= 'z' ? 1 : 0)
#define ALPHA(c) (MIN(c) || MAJ(c) ? 1 : 0)

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ALPHA(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
