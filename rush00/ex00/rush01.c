/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 23:28:13 by chansen           #+#    #+#             */
/*   Updated: 2016/07/17 23:28:14 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int x, char fst, char mid, char lst)
{
	ft_putchar(fst);
	x--;
	while (x > 1)
	{
		ft_putchar(mid);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(lst);
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (x > 0 && y > 0)
	{
		ft_printline(x, '/', '*', '\\');
		y--;
	}
	while (y > 1)
	{
		ft_printline(x, '*', ' ', '*');
		y--;
	}
	while (y == 1)
	{
		ft_printline(x, '\\', '*', '/');
		y--;
	}
}
