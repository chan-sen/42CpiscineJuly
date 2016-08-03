/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 22:44:00 by chansen           #+#    #+#             */
/*   Updated: 2016/07/16 22:44:07 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (1);
	else if (index == 1)
		return (0);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
