/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:37:39 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/28 08:24:46 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ptr;

	if (!dest && !src)
		return (dest);
	ptr = dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (ptr);
}

//int    main(void)
//{
//	char	source[]="1234567890";
//	char	dest_a[10]="Hola Mundo";
//	char	src[] = "1234567890";
//	char	dst[10] = "Hola Mundo";
//
//	printf("This is the destina FT before: %s\n", dest_a);
//	ft_memcpy(dest_a, source, sizeof(src));
//	printf("I'm destination FT after: %s\n", dest_a);
//	printf("this is dst C: %s\n", dst);
//	memcpy(dst, src, sizeof(src));
//	printf("this is dst C After: %s\n", dst);
//	return (0);
//}

//DESCRIPTION
//The  memcpy() function copies n bytes from memory area src to memory areadest.
//The memory areas must not overlap.
//Use memmove(3) if  the  memory areas do overlap.
//
