/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 06:36:08 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/13 18:38:35 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

//int	main(void)
//{
//	char	str1[] = "\0";
//	char	str2[] = "HELlo";
//	
//	printf("This is FT: %d\n", ft_strncmp(str1, str2, 3));
//	printf("This is C: %d\n", strncmp(str1, str2, 3));
//	return (0);
//}

//DESCRIPTION
//The  strcmp() function compares the two strings s1 and s2.  The locale is
//not taken into account (for a locale-aware comparison,  see  strcoll(3)).
//The comparison is done using unsigned characters.
//
//strcmp()  returns  an integer indicating the result of the comparison, as
//follows:
//•  0, if the s1 and s2 are equal;
//
//•  a negative value if s1 is less than s2;
//
//•  a positive value if s1 is greater than s2.
//The strncmp() function is similar, except it compares only the first  (at
//most) n bytes of s1 and s2.
//RETURN VALUE
//The  strcmp()  and strncmp() functions return an integer less than, equal
//to, or greater than zero if s1 (or the first n bytes thereof)  is  found,
//respectively, to be less than, to match, or be greater than s2.
