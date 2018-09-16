#include "do_op.h"

void		ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = (long)nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
}


int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 0;
	nb = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\r') || (str[i] == '\f') || (str[i] == '\v'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}

