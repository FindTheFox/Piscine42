/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:19:44 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/06 16:43:38 by saneveu          ###   ########.fr       */
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
		i = len - 1;
		while (i >= 0)
		{
			if (base[len] == base[i])
				return (0);
			i--;
		}
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		l_base;
	long	nbr;

	nbr = nb;
	l_base = check_base(base);
	if (l_base > 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= l_base)
		{
			ft_putnbr_base((nbr / l_base), base);
			ft_putnbr_base((nbr % l_base), base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
