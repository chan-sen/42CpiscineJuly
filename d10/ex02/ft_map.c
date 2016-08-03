/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 10:11:17 by chansen           #+#    #+#             */
/*   Updated: 2016/07/26 10:12:33 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	index;

	index = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (index < length)
	{
		array[index] = f(tab[index]);
		index++;
	}
	return (array);
}
