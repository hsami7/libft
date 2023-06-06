/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:58:17 by hsami             #+#    #+#             */
/*   Updated: 2023/06/04 19:21:44 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if ((size_t) start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		str = (char *)malloc((ft_strlen(&s[start]) + 1) * sizeof(char));
	else
		str = (char *) malloc((len +1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

/*
Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
	The substring begins at index ’start’ and is of
	maximum size ’len’.
*/
/*
The substring.
or NULL if the allocation fails.
*/