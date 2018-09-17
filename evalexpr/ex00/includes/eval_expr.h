/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 22:42:23 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/16 22:47:33 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_opp
{
	char	operand;
	int		(*operation)(int, int);
}				t_opp;

void			ft_putchar(char c);
int				ft_strlen(char *str);
int				ft_strcmp(char *str1, char *str2);
char			*ft_strdup(char *str);
void			ft_putnbr(int nb);
int				do_op(int nb1, int nb2, char oper);
int				ft_add(int nb1, int nb2);
int				ft_sub(int nb1, int nb2);
int				ft_mul(int nb1, int nb2);
int				ft_div(int nb1, int nb2);
int				ft_mod(int nb1, int nb2);
char			**parse_str(char *str);
char			**parse_polish(char **infix);
int				find_size(char **stack);
int				is_operator(char *op);
int				f_prio(char *elem);
char			*t_s(char **stack);
char			*de_stack(char ***stack);
void			add_stack(char ***stack, char *elem);
int				ft_atoi(char *str);
int				calc_polish(char **polish);

#endif
