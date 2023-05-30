/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:19:49 by hsami             #+#    #+#             */
/*   Updated: 2023/05/30 23:01:49 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The strchr() function locates the first occurrence of c 
(converted to a char) in the string pointed to by s
RETURN VALUES:
The functions strchr() and strrchr() return a pointer to 
the located character,or NULL if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_size;

	s_size = ft_strlen(s);
	i = 0;
	while (i <= s_size)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
