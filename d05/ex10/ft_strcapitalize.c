/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saneveu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 21:58:58 by saneveu           #+#    #+#             */
/*   Updated: 2018/09/05 19:19:13 by saneveu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAJ(c) (c >= 65 && c <= 90 ? 1 : 0)
#define MIN(c) (c >= 'a' && c <= 'z' ? 1 : 0)
#define LETTER(c) (MAJ(c) || MIN(c) ? 1 : 0)
#define NUMBER(c) (c >= '0' && c <= '9' ? 1 : 0)

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (LETTER(str[i]) && MAJ(str[i]))
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	i = 0;
	while (str[i])
	{
		if (MIN(str[i]))
		{
			if ((!NUMBER(str[i - 1])) && (!LETTER(str[i - 1])))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
