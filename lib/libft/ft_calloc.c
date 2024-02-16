/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:01:39 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/30 17:05:09 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated_memory;

	if ((nmemb >= 42949672926 || size >= 42949672926) && nmemb && size)
		return (NULL);
	allocated_memory = (void *)malloc(nmemb * size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_bzero(allocated_memory, nmemb * size);
	return (allocated_memory);
}

//int	main(void)
//{
//	int		*array;
//	int		*array1;
//	size_t	i;
//	size_t	size;
//
//	size = 20;
//	array = (int *)ft_calloc(size, sizeof(int));
//	array1 = (int *)calloc(size, sizeof(int));
//	i = 0;
//	if (array1 != NULL || array != NULL)
//	{
//		printf("This is FT: \n");
//		while (i < size)
//			printf("%d", array[i++]);
//		i = 0;
//		printf("\nThis is C:\n");
//		while (i < size)
//			printf("%d", array1[i++]);
//		free(array);
//	}
//	else
//		printf("Error: It can't allocate memory\n'");
//	return (0);
//}
