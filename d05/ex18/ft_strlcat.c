/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:06:46 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/05 23:14:29 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int srclen;
	unsigned int destlen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	while (src[i] && (destlen + i + 1) < size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if (size < destlen)
		return (size + srclen);
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
