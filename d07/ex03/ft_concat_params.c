/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:08:43 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/06 22:52:23 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	 *ft_strcat(char *dest, char *src)
{
	int i;


char 	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	char *dest;

	i = 1;
	if (!(dest = malloc(sizeof(ft_strlen(*argv)))))
		return (0);
	while (i <= argc)
	{
		while (argv[i][j]			
