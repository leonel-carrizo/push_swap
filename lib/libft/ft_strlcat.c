/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:42:41 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/04 19:02:33 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	const char	*odst;
	const char	*osrc;
	size_t		n;
	size_t		dlen;

	odst = dst;
	osrc = src;
	n = dsize;
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = dsize - dlen;
	if (n-- == 0)
		return (dlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - osrc));
}
//int	main(void)
//{
//	char	dest[] = "Hola ";
//	const char str = "the cake is a lie !\0I'm hidden lol\r\n";
//	const char *src = str;
//
//	char dest1[] = "Hola ";
//	const char *src1 = str;
//
//	ft_strlcat(dest, src, sizeof(dest));
//	printf("This is FT: %s\n", dest);
//	printf("This is FT lenght: %ld\n\n", ft_strlcat(dest, src, sizeof(dest)));
//	
//	strlcat(dest1, src1, sizeof(dest1));
//	printf("This is C: %s\n", dest1);
//	printf("This is C lenght: %ld\n", strlcat(dest1, src1, sizeof(dest1)));
//
//	return (0);
//}

//Concatenate strings `src` in `dst` buffer.
//take the full size of buffer no just the lenght.
//garatee a NUL-terminate on the result as long as there is
//at least one byte free in `dst`.
//It shoud be included a byte free on `dst` for NUL-terminate.
//Only operate on true C. This means that `src` and `dst`
//must be NUL-terminated.
//append the `src` string with the '\0' at the end of `dst`.
//This means that: size - strlen(dst) - 1 
//This will result in a NUL-terminated string.
//RETURN VALUE
//strlcat return the total lenght of the string is trying to create.
//if `src` > `dst` (strlcat will no find the '\0') 
//the NUL won't be append and the lenght will be = size and `dst`
//won't be NUL-terminated (ther is not space for it)
