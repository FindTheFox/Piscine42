#include <stdlib.h>
#include "ft_stock_par.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char 	ft_strdup(char src)
{
	int *dest;
	int i;

	i = 0;
	src_size = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(char) * src_size)));
		return (0);
	while (i < src_size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[src_size] = '\0';
	return (dest);
}

struct s_point_par *ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par *tab;
	int i;

	if (!(tab = (struct s_stock_par*)malloc(sizeof(tab) * ac)))
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = "\0";
	return (tab);
}
