/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 22:38:04 by chansen           #+#    #+#             */
/*   Updated: 2016/07/19 22:38:06 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index1;
	int	index2;
	int findsz;

	index1 = 0;
	index2 = 0;
	findsz = 0;
	while (to_find[findsz] != '\0')
		findsz++;
	if (findsz == 0)
		return (str);
	while (str[index1] != '\0')
	{
		while (to_find[index2] == str[index1 + index2])
		{
			if (index2 == findsz - 1)
				return (str + index1);
			index2++;
		}
		index2 = 0;
		index1++;
	}
	return (0);
}

int	main(void)
{
	char	str;
	char	to_find;

	str[] = "Killme";
	to_find[] = "ill";

	ft_strstr(str, to_find);

	printf("%s\n", str);
}
