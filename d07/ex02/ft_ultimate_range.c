/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:34:58 by chansen           #+#    #+#             */
/*   Updated: 2016/07/21 22:34:59 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int index;
	int	*hold;

	index = 0;
	if (min >= max)
	{
		*range = 0;
		return (NULL);
	}
	hold = (int*)malloc(sizeof(*hold) * (max - min));
	while (min < max)
	{
		hold[index] = min;
		min++;
		index++;
	}
	*range = hold;
	return (index);
}
