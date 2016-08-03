/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 22:29:48 by chansen           #+#    #+#             */
/*   Updated: 2016/07/28 22:29:49 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int		ft_filestat(int argc)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments");
		return (0);
	}
	else
	{
		return (1);
	}
}

