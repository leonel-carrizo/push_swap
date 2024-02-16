/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:53:51 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/13 18:42:32 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}

//int	main(void)
//{
//	char	x[10];
//	int		i;
//
//	printf("%p\n", ft_memset(&x, '0', 10));
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", x[i]);
//		i++;
//	}
//	return (0);
//}
