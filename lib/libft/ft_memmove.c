/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:58:38 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/28 08:38:38 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void		*d;

	if ((!dest && !src) || (dest == src))
		return (dest);
	d = dest;
	if (dest > src)
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	else
		while (n--)
			*(char *)dest++ = *(char *)src++;
	return (d);
}

//int	main(void)
//{
//	char	origen[12] = "Hello, world";
//	char	destino[12] = "Hello, world";
//
//	ft_memmove(&origen[7], origen, 5);
//	printf("Destination with ft_ = --%s--\n", origen);
//	memmove(&destino[7] , destino, 5);
//	printf("Destination with string.h = --%s--\n", origen);
//	return (0);
//}
//
//DESCRIPCIÓN
//La función memmove() copia n bytes del área de memoria src 
//al área de memoria dest.  
//Las áreas de memoria pueden solaparse.
//VALOR DEVUELTO
//La función memmove() devuelve un puntero a dest.
//
//DESCRIPTION
//The memmove() function copies n bytes from memory area src 
//to memory area dest.
//The  memory  areas may overlap: copying takes place as though the bytes 
//in src are first copied into a temporary array 
//that does not  overlap  src  or dest, 
//and the bytes are then copied from the temporary array to dest.
//RETURN VALUE
// The memmove() function returns a pointer to dest.
