/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:11:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/05 05:58:31 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *to_find, size_t len)
{
	size_t	i;

	if (!str && !len)
		return (NULL);
	if (!*to_find)
		return ((char *)str);
	while (*str && len--)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i] && i <= len)
		{
			if (!to_find[i + 1])
				return ((char *)str);
			i++;
		}
		str++;
	}
	return (NULL);
}

//int	main(void)
//{
////	const char *large = "MZIRIBMZIRIBMZE123";
////	const char *small = "MZIRIBMZE";
//	//char	*ptr;
////	char *empty = (char*)"";
//	char haystack[30] = "aaabcabcd";
////	char needle[10] = "aabc";
//
//	//ptr = ft_strnstr(large, small, 11);
//	//printf("This is FT: %s\n", ft_strnstr(large, small, ft_strlen(small)));
//	//printf("This is C: %s\n", strnstr(large, small, ft_strlen(small)));
//	printf("This is FT: %s\n", ft_strnstr(haystack, "cd", 8));
//	printf("This is C: %s\n", strnstr(haystack, "cd", 8));
//	return (0);
//}
