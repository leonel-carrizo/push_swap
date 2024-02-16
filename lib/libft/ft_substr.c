/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:06:37 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/02 00:41:29 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	ptr = sub_str;
	s += start;
	*(sub_str + len) = '\0';
	while (len-- && *s)
		*sub_str++ = *s++;
	return (ptr);
}

//int	main(void)
//{
//	char		*ns;
//	//const char	str[] = "tripouille";
//	ns = ft_substr("tripouille", 100, 1);
//	printf("The substring is: __%s__\n", ns);
//	return (0);
//}
