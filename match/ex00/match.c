/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:04:34 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/09 16:18:10 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	return (0);
}

int	main(int ac, char **av)
{
	match(av[1], av[2]);
	return (0);
}
