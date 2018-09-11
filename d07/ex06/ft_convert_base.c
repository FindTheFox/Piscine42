/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:06:51 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/11 14:44:44 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_base(char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len])
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		i = len;
		while (i-- >= 0)
			if (str[i] == str[len])
				return (0);
		len++;
	}
	return (len);
}

int		in_base(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	base_n;
	int	nb;
	int	sign;
	int	i;

	base_n = check_base(base);
	if (base_n < 2)
		return (0);
	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign *= (str[i++] == '-' ? -1 : 1);
	while (in_base(base, str[i]) != -1)
	{
		nb = nb * base_n + in_base(base, str[i]);
		i++;
	}
	return (sign * nb);
}

void	ft_putnbr_base(int nb, char *base, char **str, int i)
{
	int		l_base;
	long	nbr;

	nbr = nb;
	l_base = check_base(base);
	if (l_base >= 2)
	{
		if (nbr < 0)
		{
			str[0][0] = '-';
			ft_putnbr_base(-nbr, base, str, 1);
			printf("nbr = %ld\n", nbr);
		}
		else if (nbr >= l_base)
		{
			ft_putnbr_base(nbr / l_base, base, str, i + 1);
			ft_putnbr_base(nbr % l_base, base, str, i);
		}
		else
			str[0][i] = base[nbr];
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		number;
	char	*str;
	int		j;
	char	tmp;

	number = ft_atoi_base(nbr, base_from);
	printf("atoi = %d\n", number);
	if (!(str = (char *)malloc(sizeof(char) * 50)))
		return (0);
	i = 0;
	while (i < 50)
		str[i++] = 0;
	ft_putnbr_base(number, base_to, &str, 0);
	i = 0;
	str += (str[i] == '-' ? 1 : 0);
	j = 0;
	while (str[j])
		j++;
	while (i < j / 2)
	{
		tmp = str[i];
		str[i] = str[j - i - 1];
		str[j - i++ - 1] = tmp;
	}
	return (str[-1] == '-' ? str - 1 : str);
}

int		main(int ac, char **av)
{
	printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
