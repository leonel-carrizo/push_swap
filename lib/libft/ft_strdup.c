/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:49:56 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/04 22:43:14 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*new_str;
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	new_str = ptr;
	if (ptr != NULL)
	{
		while (len--)
			*ptr++ = *s++;
		*ptr = '\0';
	}
	return (new_str);
}

//int	main(void)
//{
//	const char *orig;
//	char *dupli;
//
//	orig = "'Hola Mundo ----'";
//	dupli = ft_strdup(orig);
//	printf("This is FT: %s\n", dupli);
//	free(dupli);
//	return (0);
//}
