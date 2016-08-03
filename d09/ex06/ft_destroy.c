/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 17:12:55 by chansen           #+#    #+#             */
/*   Updated: 2016/07/22 17:12:58 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int index;
	int c;

	index = 0;
	c = 0;
	while (factory[index])
	{
		while (factory[index][c])
		{
			free(factory[index][c])
			c++;
		}
		free(factory[index])
		index++;
	}
	clear(factory)
}
