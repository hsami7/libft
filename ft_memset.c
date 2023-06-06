/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:11:15 by hsami             #+#    #+#             */
/*   Updated: 2023/05/19 18:33:18 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*t;
	size_t	i;

	i = 0;
	t = (char *)b;
	while (i < len)
	{
		t[i] = (char)c;
		i++;
	}
	return (b);
}
