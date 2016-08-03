/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 20:49:46 by chansen           #+#    #+#             */
/*   Updated: 2016/07/19 20:49:47 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index] != '\0' && n != 0)
	{
		dest[index] = src[index];
		index++;
		n--;
	}
	dest[index] = '\0';
	return (dest);
}
