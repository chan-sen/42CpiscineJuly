/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 23:01:04 by chansen           #+#    #+#             */
/*   Updated: 2016/07/27 23:01:05 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;

	new = *begin_list;
	if (new)
	{
		while (new->next)
			new = new->next;
		new->next = ft_create_elem(data);
	}
	else
	{
		{
			*begin_list = ft_create_elem(data);
		}
	}
}
