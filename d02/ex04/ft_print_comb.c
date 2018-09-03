/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:40:07 by saneveu           #+#    #+#             */
/*   Updated: 2018/08/29 19:45:01 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	ft_display(char a, char b, char c)
{
	if (!(a == '7' && b == '8' && c == '9'))
		ft_putchar(',');
	if (!(a == '7' && b == '8' && c == '9'))
		ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_display(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
