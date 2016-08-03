/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 17:58:39 by chansen           #+#    #+#             */
/*   Updated: 2016/07/21 17:58:49 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	int		c;
	char 	*strc;

	index = 0;
	c = 0;
	while (src[c])
		c++;
	strc = (char*)malloc(sizeof(*strc) * (c));
	if (c == NULL)
		return NULL;
	while (c > index)
	{
		strc[index] = src[index];
		index++;
	}
	strc[c] = '\0'
	return (strc);
}
