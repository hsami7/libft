/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:11:28 by hsami             #+#    #+#             */
/*   Updated: 2023/05/17 20:16:36 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	int		prod;

	prod = count * size;
	p = malloc(prod);
	if (!p)
		return (NULL);
	ft_bzero(p, prod);
	return (p);
}
