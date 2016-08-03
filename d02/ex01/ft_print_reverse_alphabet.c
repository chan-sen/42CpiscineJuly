/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:05:13 by chansen           #+#    #+#             */
/*   Updated: 2016/07/14 16:05:26 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

void	ft_print_reverse_alphabet()
{
	char c;
	c = 'z';
	while(c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}