/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:35:25 by chansen           #+#    #+#             */
/*   Updated: 2016/07/26 19:35:26 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element)
	{
		element->data = data;
		element->next = NULL;
	}
	return (element);
}
