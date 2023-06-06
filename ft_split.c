/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:23:46 by hsami             #+#    #+#             */
/*   Updated: 2023/06/06 13:55:28 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
		word++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	arr = ft_calloc(count_word((char *)s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	start = 0;
	i = 0;
	while (s[start])
	{
		while (s[start] == c && s[start])
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		if (s[start])
			arr[i] = ft_substr(s, start, end - start);
		i++;
		start = end;
	}
	return (arr);
}

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/
/*
The array of new strings resulting from the split.
NULL if the allocation fails.
*/