/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:56:28 by hsami             #+#    #+#             */
/*   Updated: 2023/06/06 15:17:21 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

static void	less_lines(char *str, long int nb, int i)
{
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	if (nb == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
		return (str);
	}
	i = ft_count_digit(nb);
	str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (0);
	str[i--] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	less_lines(str, nb, i);
	return (str);
}
