/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:43:29 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/19 18:53:40 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nbr)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	if (*nbr == '-' || *nbr == '+')
		if (*nbr++ == '-')
			sign *= -1;
	while (*nbr >= '0' && *nbr <= '9')
	{
		result = result * 10 + (*nbr - '0');
		nbr++;
	}
	return (result * sign);
}
