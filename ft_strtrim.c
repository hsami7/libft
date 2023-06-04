/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:15:41 by hsami             #+#    #+#             */
/*   Updated: 2023/06/02 12:42:08 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_set(s1[end - 1], set))
		end--;
	s = (char *)malloc((end - start + 1) * sizeof(char));
	if (!s)
		return (0);
	i = 0;
	while (start < end)
	{
		s[i] = s1[start];
		i++;
		start++;
	}
	s[i] = '\0';
	return (s);
}

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/