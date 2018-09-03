/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:11:56 by saneveu           #+#    #+#             */
/*   Updated: 2018/08/31 00:10:31 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_display(int x, int y, int a, int b)
{
			if (b == 1 && a == 1)
				ft_putchar('o');
			else if (a == x && b == 1)
				ft_putchar('o');
			else if (a == 1 && b == y)
				ft_putchar('o');
			else if (a == x && b == y)
				ft_putchar('o');
			else if (a == 1 || a == x)
				ft_putchar('-');
			else if (b == 1 || b === y)
				ft_putchar('|');
			else 
				ft_putchar(' ');
			a++;
	
}

void	rush(int x);
{
	int a;
	int b;

	if (x == 0 && y == 0)
		break
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
			ft_display(x, y, a, b);
		ft_putchar('\n');
		b++;
	}
}		
