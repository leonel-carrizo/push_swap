/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:51:18 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/02 01:14:05 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*ptr;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	ptr = new_str;
	while (*s1)
		*new_str++ = *s1++;
	while (*s2)
		*new_str++ = *s2++;
	*new_str = '\0';
	return (ptr);
}

//int	main(void)
//{
//	const char	*pref;
//	const char	*suff;
//	char		*joined;
//
//	pref = "Hola ";
//	suff = "Que pasa";
//	joined = ft_strjoin(pref, suff);
//	printf("Joined: %s\n", joined);
//	free(joined);
//	return (0);
//}
