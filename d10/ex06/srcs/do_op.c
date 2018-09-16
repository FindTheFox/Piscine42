#include "do_op.h"


void	tab_pf(t_tab_pf *pf)
{
	pf[0].op = '+';
	pf[0].f = &op_plus;
	pf[1].op = '-';
	pf[1].f = &op_moins;
	pf[2].op = '%';
	pf[2].f = &op_mod;
	pf[3].op = '/';
	pf[3].f = &op_div;
	pf[4].op = '*';
	pf[4].f = &op_fois;
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int i;
		int j;
		t_tab_pf ope[5];
		
		j = 0;
		i = 0;
		while (i < 5)
		{
			if (av[2][0] == ope[i].op)
			{
				ope[i].f(ft_atoi(av[1]), ft_atoi(av[3]));
				j = 1;
			}
			i++;
		}
		if (j == 0)
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
