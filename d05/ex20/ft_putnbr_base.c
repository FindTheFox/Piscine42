/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:19:44 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/05 13:19:25 by saneveu          ###   ########.fr       */
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
			if (base[len] == base [i])
				return(0);
		}
		len++;
	}	
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int l_base;
	int i;
	int result;

	l_base = check_base(base);
	if (base[l_base] > 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
			ft_putchar((nbr % 
		}
		
	}
}
