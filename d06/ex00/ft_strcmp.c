/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:56:09 by chansen           #+#    #+#             */
/*   Updated: 2016/07/20 15:56:11 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int r;

	index = 0;
	r = 0;
	while ((s1[index] || s2[index]) && (r == 0))
	{
		if (s1[index] != s2[index])
		{
			r = s1[index] - s2[index];
			return (r);
		}
		index++;
	}
	return (r);
}
