/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:40:38 by chansen           #+#    #+#             */
/*   Updated: 2016/07/19 10:40:42 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nbr;
	int index;
	int neg;

	nbr = 0;
	index = 0;
	neg = 1;
	while ((str[index] <= ' ') || (str[index] == '0') || (str[index] == '+'))
		index++;
	if (str[index] == '-')
	{
		neg = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		if (!(((str[index] - '0') >= 0) && ((str[index] - '0') <= 9)))
		{
			return (0);
		}
		nbr = nbr * 10 + (str[index] - '0');
		index++;
	}
	nbr = nbr * neg;
	return (nbr);
}
