/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:55:48 by chansen           #+#    #+#             */
/*   Updated: 2016/07/20 21:55:50 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	index = 0;
	argc = 0;
	while (argv[0][index])
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	ft_putchar('\n');
	return (0);
}
