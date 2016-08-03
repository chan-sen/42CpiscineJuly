/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 17:40:33 by chansen           #+#    #+#             */
/*   Updated: 2016/07/14 17:40:38 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void 	ft_is_negative(int n);
void 	ft_putchar(char c);

void 	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}