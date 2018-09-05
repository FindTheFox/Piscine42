/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 21:04:15 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/05 21:13:27 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	if (!(dest = malloc(sizeof(ft_strlen(src)))))
			return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
}
