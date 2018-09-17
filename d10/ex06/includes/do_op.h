/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:23:00 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/17 23:36:48 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

typedef	struct	s_tab_pf
{
	char	op;
	void	(*f)(int, int);
}				t_tab_pf;

void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			op_plus(int nb1, int nb2);
void			op_moins(int nb1, int nb2);
void			op_fois(int nb1, int nb2);
void			op_mod(int nb1, int nb2);
void			op_div(int nb1, int nb2);
int				ft_atoi(char *str);

#endif
