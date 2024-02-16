/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:14:56 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/28 23:06:43 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size <= 0)
		return (len);
	size -= 1;
	while (*src && size--)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}

//int	main(void)
//{
//	char		dest[] = " ";
//	const char	src[] = "Hola mundo loco";
//
//	printf("This is FT before: %s\n", dest);
//	ft_strlcpy(dest, src, sizeof(dest));
//	printf("This is FT: %s\n", dest);
//	printf("This is FT: %ld\n", ft_strlcpy(dest, src, sizeof(dest)));
//	strlcpy(dest, src, sizeof(dest));
//	printf("This is C: %s\n", dest);
//	printf("This is C: %ld\n", strlcpy(dest, src, sizeof(dest)));
//	return (0);
//}
//
//Disenada para reemplazar `strcpy`
//copia una cadena desde una fuente sin desbordar el buffer de dest.
//toman el tamano completo del buffer no solo el largo de la cadena.
//copia `size - 1` 
//agrega el NUL al final de la cadena copiada si el tamano > 0.
//solo operan con cadenas que termian en NUL ('\0') "true C"
//retorna el tamano total de la cadena se que trato de copiar.
//compilar con la bandera -lbsd
//<bsd/string.h>
//NOTA: ideal estudiar sobre el desbordamiento de buffer y
//como pude ser usado por cyber criminales para INYECCION DE CODIGO MALICIOSO.
