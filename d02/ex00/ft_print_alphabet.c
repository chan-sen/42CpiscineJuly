/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 12:32:46 by chansen           #+#    #+#             */
/*   Updated: 2016/07/14 12:32:53 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_alphabet(void);
void	ft_putchar(char c);

void	ft_print_alphabet()
{
	char c;
	c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}