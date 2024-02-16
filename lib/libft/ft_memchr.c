/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:53:22 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/13 18:43:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

//int	main(void)
//{
//	unsigned char	x[] = "HolaMundo";
//
//	printf("This is FT: %p\n", ft_memchr(x, 'o', 5));
//	printf("This is C: %p\n", memchr(x, 'o', 5));
//	return (0);
//}

//DESCRIPTION
//The  memchr()  function  scans  the  initial  n  bytes of the memory area
//pointed to by s for the first instance of c.  Both c and the bytes of the
//memory area pointed to by s are interpreted as unsigned char.
//
//The memrchr() function is like the  memchr()  function,  except  that  it
//searches  backward from the end of the n bytes pointed to by s instead of
//forward from the beginning.
//
//The rawmemchr() function is similar to memchr(): it  assumes  (i.e.,  the
//programmer knows for certain) that an instance of c lies somewhere in the
//memory  area starting at the location pointed to by s, and so performs an
//optimized search for c (i.e., no use of a count  argument  to  limit  the
//range  of the search).  If an instance of c is not found, the results are
//unpredictable.  The following call is a fast means of locating a string's
//terminating null byte:
//         char *p = rawmemchr(s, '\0');
//
//RETURN VALUE
//The memchr() and memrchr() functions return a  pointer  to  the  matching
//byte or NULL if the character does not occur in the given memory area.
//
//The  rawmemchr()  function returns a pointer to the matching byte, if one
//is found.  If no matching byte is found, the result is unspecified.
