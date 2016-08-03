/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 12:27:46 by chansen           #+#    #+#             */
/*   Updated: 2016/07/23 12:27:48 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		word_count(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ')
		{
			if (str[i - 1] > ' ')
			{
				words++;
			}
		}
		i++;
	}
	words++;
	return (words);
}

char	*char_count(char *str, int *index)
{
	char	*word;
	int		i;
	int		start;
	int		end;

	i = *index;
	while (str[i] <= ' ')
		i++;
	start = i;
	while (str[i] > ' ')
		i++;
	end = i;
	*index = i;
	word = malloc(sizeof(*word) * end - start);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		i;
	int		k;

	i = 0;
	k = 0;
	array = malloc(sizeof(char**) * word_count(str) + 1);
	while (k < word_count(str + 1))
	{
		array[k] = char_count(str, &i);
		k++;
	}
	array[k] = 0;
	printf("Array [0]%s\n", array[0]);
	printf("Array [1]%s\n", array[1]);
	printf("Array [2]%s\n", array[2]);
	printf("Array [3]%s\n", array[3]);
	printf("Array [4]%s\n", array[4]);
	return (array);
}

int	main(void)
{
	char	c[]

	c = "split that 	fucking white 	space";
	ft_split_whitespaces(c);
	return (0);
}
