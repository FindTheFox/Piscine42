/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:08:43 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/08 21:05:15 by saneveu          ###   ########.fr       */
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


char	 *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
		
char 	*ft_concat_params(int ac, char **av)
{
	int i;
	int j;
	int count;
	char *dest;

	i = 1;
	count = 0;
	while (i < ac)
	{
		count += ft_strlen(av[i]);
		i++;
	}
	if (!(dest = (char *)malloc(sizeof(dest) * (count + ac - 1))))
		return (0);
	i = 1;
	while (i < ac)
	{	
		ft_strcat(dest, av[i]);	
		if (i < ac - 1)
			ft_strcat(dest, "\n");
		i++;
	}
	count = ft_strlen(dest);
	dest[count] = '\0';
	return (dest);
}

int		main(int ac, char **av)
{
	printf("%s", ft_concat_params(ac, av));
	return (0);
}
