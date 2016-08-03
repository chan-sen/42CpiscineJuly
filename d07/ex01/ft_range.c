/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:35:47 by chansen           #+#    #+#             */
/*   Updated: 2016/07/21 18:35:50 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		index;
	int		*hold;

	index = 0;
	if (min >= max)
		return (0);
	hold = (int*)malloc(sizeof(*hold) * (max - min));
	while (min < max)
	{
		hold[index] = min;
		min++;
		index++;
	}
	return (hold);
}

int		main()
{
	int	min;
	int	max;

	min = 10;
	max = 1309698650;
	return (0);
}