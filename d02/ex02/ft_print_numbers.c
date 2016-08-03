/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:26:46 by chansen           #+#    #+#             */
/*   Updated: 2016/07/14 16:26:49 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void 	ft_print_numbers(void);
void 	ft_putchar(char c);

void 	ft_print_numbers()
{
	char c;
	c = '0';
	while(c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}