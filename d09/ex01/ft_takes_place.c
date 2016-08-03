/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:44:46 by chansen           #+#    #+#             */
/*   Updated: 2016/07/21 18:44:52 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	int	x;

	x = hour + 1;
	if (hour < 24 && hour >= 1)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		x = hour + 1;
		if (hour >= 0 && hour < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, x);
		if (hour > 12 && hour < 23)
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, x - 12);
		if (hour == 11)
			printf("%d.00 A.M. AND %d.00 P.M.\n", hour, x - 12);
		if (hour == 23)
			printf("%d.00 P.M. AND %d.00 A.M.", hour - 12, x - 12);
	}
	return ;
}
