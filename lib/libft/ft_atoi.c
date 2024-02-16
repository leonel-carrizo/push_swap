/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:49:53 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/16 18:58:07 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign *= -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

//int	main(int ac, char **av)
//{
//	int	mine;
//	int	c;
//	if (ac == 2)
//	{
//		mine = ft_atoi(av[1]);
//		c = atoi(av[1]);
//		printf("Main is: %d\n C is: %d\n", mine, c);
//	}
//	return (0);
//}
