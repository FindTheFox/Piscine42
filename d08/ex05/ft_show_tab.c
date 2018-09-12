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

void	ft_show_tab(struct s_stock_par *par)
{
	int i;


