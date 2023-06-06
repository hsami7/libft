/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:30:31 by hsami             #+#    #+#             */
/*   Updated: 2023/06/02 17:51:31 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str_src;
	unsigned char	*str_dst;

	str_src = (unsigned char *) src;
	str_dst = (unsigned char *) dst;
	if (!dst && !src)
	{
		return (dst);
	}
	while (n > 0)
	{
		str_dst[n - 1] = str_src[n - 1];
		n--;
	}
	return (dst);
}

/*
The memcpy() function copies n bytes from memory area src to memory area dst.
 The memcpy() function returns the original value of dst.
*/