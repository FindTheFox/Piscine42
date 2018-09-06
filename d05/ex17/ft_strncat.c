/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:01:21 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/06 22:47:57 by saneveu          ###   ########.fr       */
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
	int 	j;

	i = 0;
	j = ft_strlen(dest);
	while (i <= nb && src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
