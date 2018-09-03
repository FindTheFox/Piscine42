/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 23:49:28 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/03 16:42:17 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strrev(char *str)
{
	int		a;
	int		len;
	char	tmp;

	a = 0;
	len = ft_strlen(str) - 1;
	while (a <= len)
	{
		tmp = str[a];
		str[a] = str[len];
		str[len] = tmp;
		len--;
		a++;
	}
	return (str);
}
