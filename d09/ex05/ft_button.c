/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 00:36:18 by chansen           #+#    #+#             */
/*   Updated: 2016/07/22 00:36:21 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if ((i > j && j > k) || (k > j && j > i)) //j as mid value
		return j;
	if ((j > k && k > i) || (i > k && k > j)) //k as mid value
		return k;
	else
		return i;
	return (0);
}
