/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:04:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/27 15:30:45 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}

//static void my_function(unsigned int i, char *c)
//{
//	if (*(c + i) || *c)
//		*c += 32 + 1;
//}
//
//int	main(void)
//{
//	char	str[] = "ABCDEFGH";
//
//	ft_striteri(str, my_function);
//	printf("__%s__\n",str);
//	return (0);
//}
