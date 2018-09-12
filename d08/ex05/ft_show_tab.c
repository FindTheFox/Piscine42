void	ft_putchar(char c);

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

void	ft_print_words_tables(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
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
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else ft_putchar(nbr + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	
	i = 0;
	while (par[i])
	{
		ft_putnbr(par[i]->size_param);
		ft_putstr(par[i]->str);
		ft_putstr(par[i]->copy);
		ft_print_words_tables(par[i]->tab);
		i++;
	}
}



