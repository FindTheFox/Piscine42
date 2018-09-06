/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:01:21 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/06 18:14:15 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*str;

	i = 0;
	str = dest + ft_strlen(dest);
	while (src[i] && i <= nb)
	{
		dest[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (dest);
}
