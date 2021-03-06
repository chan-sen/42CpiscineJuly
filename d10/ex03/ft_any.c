/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 15:53:20 by chansen           #+#    #+#             */
/*   Updated: 2016/07/26 15:53:22 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int	index;

	index = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			return (1);
		else
			return (0);
		index++;
	}
	return (0);
}
