/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 17:19:30 by chansen           #+#    #+#             */
/*   Updated: 2016/07/22 17:19:31 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_generic(void)
{
	int		index;
	char	*str;

	str = "Tu tu tu tu ; Tu tu tu tu\n";
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	write(1, str, index);
}
