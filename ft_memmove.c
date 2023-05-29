/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:23:13 by hsami             #+#    #+#             */
/*   Updated: 2023/05/29 16:47:33 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	
	i = 0;
	if ((size_t)(dst - src) >= len)
	{
		while (i < len)
		{
			((unsigned  char *)dst)[i] = ((unsigned  char *)src)[i];
			i++;
		}
	}
	
	if ((size_t)(dst - src) < len)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned  char *)src)[len];
		}
		
	}
	return (dst);
}

/*
The memmove() function copies len bytes from string src to string dst.
The memmove() function returns the original value of dst.
*/