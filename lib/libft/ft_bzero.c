/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:48:45 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/13 18:40:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = '\0';
}

//int	main(void)
//{
//	char	buff[10] ="-hello all";
//	int	i;
//
//	printf("the word before bzero is %s\n", buff);
//	ft_bzero(&buff, 5);
//	i = 0;
//	while (i < 10)
//	{
//		printf("the word  afetr bzero is %d\n", buff[i] );
//		i++;
//	}
//
//	return (0);
//}
//
//DESCRIPCION
//La función bzero() borra los datos en las bytes n de la memoria que comienza 
//en el lugar apuntado por s, escribiendo (bytes que contienen '0') a esa zona.
//La función explícita.bzero () desempeña la misma tarea que bzero(). 
//Se diferencia de bzero() en el sentido de que garantiza que Optimizaciones de 
//compilador no eliminarán la operación de borrado si el compilador 
//Deduce que la operación es "innecesaria".
