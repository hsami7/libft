/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsami <hsami@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:39:53 by hsami             #+#    #+#             */
/*   Updated: 2023/06/08 15:54:11 by hsami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	res = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		res = res * 10 + (str[i++] - '0');
	return (res * sign);
}

/*
The atoi() function converts the initial portion of the string 
	pointed to by str to int representation.
ft_atoi function, which is used to convert a string representation 
	of an integer to an actual int value. if you have the string "42", 
	the ft_atoi function would convert it to the actual int value 42
*/