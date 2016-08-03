/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:18:20 by chansen           #+#    #+#             */
/*   Updated: 2016/07/14 19:18:29 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void 	ft_print_comb(void);
void 	ft_putchar(char c);
void 	print_line(char a, char b, char c);
void 	replace(int n);

void 	ft_print_comb()
{
	char	a;
	char 	b;
	char 	c;
	a = '0';
	b = '1';
	c = '2';
	while(a <= '7')
	{
		while(b <= '8')
		{
			while(c <= '9')
			{
				print_line(a,b,c);
				replace(a);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void 	print_line(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void 	replace(int data1)
{
	if(data1 != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}