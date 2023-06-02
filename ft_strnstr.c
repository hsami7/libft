/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 01:16:58 by hsami             #+#    #+#             */
/*   Updated: 2023/05/31 21:41:41 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenstr1;
	size_t	lenstr2;

	i = 0;
	j = 0;
	i = 0;
	lenstr1 = ft_strlen(haystack);
	lenstr2 = ft_strlen(needle);
	if (!lenstr2)
		return ((char *)haystack);
	while (i + lenstr2 <= len && haystack[i] != '\0')
	{
		while (j < lenstr2 && haystack[i + j] == needle[j])
		{
			j++;
			if (j == lenstr2)
				return ((char *)(haystack + i));
		}	
		j = 0;
		i++;
	}
	return (NULL);
}

/*
The strnstr() function locates the first occurrence of the null-terminated
     string needle in the string haystack, where not more than len characters are
     searched.
RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs nowhere
     in haystack, NULL is returned; otherwise a pointer to the first character of
     the first occurrence of needle is returned.
*/