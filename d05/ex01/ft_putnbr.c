/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 21:43:44 by chansen           #+#    #+#             */
/*   Updated: 2016/07/18 21:43:47 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr (int nb)
{
	char	str[10];
	int	count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
	while (nb >= 1)
	{
		str[count] = ((nb % 10) + '0');
		nb /= 10;
		count++;
	}
	while (count >= 0)
	{
		ft_putchar(str[count]);
		count--;
	}
}
