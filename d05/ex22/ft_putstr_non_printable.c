/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:19:44 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/06 14:02:11 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check_base(char *base)
{
	int i;
	int len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		if (base[len] == 0)
			return (0);
		i = len;
		while (i--)
		{
			if (base[len] == base[i])
				return (0);
		}
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int l_base;

	l_base = check_base(base);
	if (l_base > 0)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_base((nbr / l_base), base);
			ft_putchar('8');
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base((-1 * nbr), base);
		}
		else if (nbr >= l_base)
		{
			ft_putnbr_base((nbr / l_base), base);
			ft_putnbr_base((nbr % l_base), base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] <= 16)
				ft_putchar('0');
			ft_putnbr_base(str[i], base);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
